// Priority Queue implementation using pqs


class MinPriorityQueue{
    
    vector<int> pq;
    public:

    MinPriotityQueue(){

    }

    int size(){
        return pq.size();
    }

    bool empty(){
        return pq.size() == 0;
    }

    int min(){
        return pq[0]; // This would be the minimum element as it is the first element of the vector where we have our heap
    }

    void insert(int element){
        pq.push_back(element); // Inserting the new node at the end of the vector
        // If the new inserted element is smaller than its parent then we perform swaps in the vector till we have our original ROOT MINIMUM STRUCTURE (AS WE HVE MIN PQ)   
        // Heapification Process:- (This is Up Heapify)

        int child_index = pq.size() - 1 ;
        int parent_index = (child_index - 1) / 2 ;
        while(child_index != 0 && pq[parent_index] > pq[child_index]){
            int temp =  pq[parent_index];
            pq[parent_index] = pq[child_index];
            pq[child_index] = temp;

            child_index = parent_index;
            parent_index = (child_index - 1) / 2 ;
        }
    }

    int removeMin(){


        if(pq.empty()){
            return 0;
        }

        int value_removed = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        // Now the vector is Not a heap anymore so we can 
        // Heapify (Down Heapify) :-
        int child1_index = 1;
        int child2_index = 2;
        int parent_index = 0;

        while(parent_index < pq.size()){
            if(pq[child2_index] < pq[child1_index] && pq[child2_index] < pq[parent_index]){
                int temp = pq[child2_index];
                pq[child2_index] = pq[parent_index];
                pq[parent_index] = temp;
                parent_index = child2_index;
                child1_index = (2*parent_index) + 1;
                child2_index = (2*parent_index) + 2;
            }
            else if(pq[child1_index] < pq[child2_index] && pq[child1_index] < pq[parent_index]){
                int temp = pq[child1_index];
                pq[child1_index] = pq[parent_index];
                pq[parent_index] = temp;
                parent_index = child1_index;
                child1_index = (2*parent_index) + 1;
                child2_index = (2*parent_index) + 2;
            }
            else
                break;
        }

        return value_removed;



    }



};