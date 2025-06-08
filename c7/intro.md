# Array
> Array is a data structure which stores a collection of items.
> Array has contiguous memory.

>> Synatax for Array Declaration 
--> data_type array_name [array_size];

## Linear Search
> Search if a given element is present in the array or not. If it is not present then return -1 else return the index.

> dynamic arrays --> resizable when insert / delete elements.

## Basic Operations in Vectors

1. Declaration
#include<vector>
    vector <datatype> vector_name;

2. Size 
    v.size() --> length

3. Resize
    v.resize(new_size);

4. Capacity
    v.capacity()

5. Add elements
    v.push_back(element)

    v.insert(position, element) // position = v.begin()+n

    v.begin() --> first element
    v.end() --> last element

6. Delete element
    v.pop_back()

    v.erase(position) // position = v.end()-n