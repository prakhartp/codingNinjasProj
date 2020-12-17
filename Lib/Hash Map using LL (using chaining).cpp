//  Implementing a Hash Map using a map  node class;
// Can improve this by writing a code for rehashing that runs when Load factor > 0.75
#include<string>
using namespace std;

template<typename V>
class map_node {
    public:

    string key;
    V value;
    map_node* next;

    map_node(string key , V value){
        this->key = key;
        this->value = value;
        next = nullptr;
    }

    ~map_node(){
        delete next;  // Recursive destructor , deletes the whole list by calling delete on the next 
                      // of every node
    }
};




template<typename V>
class our_map{

    map_node<V>** buckets;
    int count;
    int num_buckets;
    int get_bucket_index(string key){
        int hash_code = 0;

        int current_coeef = 1;

        for(int i = key.length()-1 ; i >= 0 ; i--){ // IMPLEMENTING HASH FUCTION
            hash_code += key[i] * current_coeff; // Keeping in range
            hash_code = hash_code % num_buckets;
            current_coeff *= 37;
            current_coeff = current_coeff % num_buckets; // Keeping in range
        }
         

        return hash_code % num_buckets;
    }

    public:

    our_map(){
        count = 0;
        num_buckets = 5;
        buckets = new map_node<V>*[num_buckets];
        for(int i = 0 i < num_buckets ; i++){
            buckets[i] = NULL;
        }
    }
    ~our_map{
        for(int i = 0 i < num_buckets ; i++){
            delete buckets[i];
        }
        delete [] buckets;
    }


    int size(){
        return count;
    }

    void insert (string key , V value){
        int bucket_index = get_bucket_index(key);
        map_node<V>* head = buckets[bucket_index]

        while(head != NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            else{
                map_node<V>* node =  new map_node<V>(key , value);
                node->next = head;
                buckets[buckets_index] = node;
                count++;
            }
            head = head->next;
        }

    }

    V get_value(string key){

        int bucket_index = get_bucket_index(key);

        map_node<V>* head = buckets[buckets_index];

        while(head != NULL){
            if(head->key == key){
                return head->value;
            }
            head = head->next;
        }
        return 0;

    }

    V remove(string key){
        int bucket_index = get_bucket_index(key);
         map_node<V>* head = buckets[bucket_index];
        
        while(head ->next != NULL){
            // Handle head case 
            // Handle end case too
            if(head->next->key == key){
                map_node<V>* temp = head->next->next;
                map_node<V>* to_del = head->next
                to_del->next = NULL;  // As we have a recursive destructor
                V val = to_del->value;
                head->next = temp;
                delete to_del;
                count--;
                return val;
            } 
            head = head->next;
        }

        // if we come here we haven't found a node with the key, so we return 0
        return 0;
    }

}