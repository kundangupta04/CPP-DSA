# Multidimensional Array -> array of arrays
>> datatype array_name [size1] [size2].....[sizeN];

## 2D Array
>>> datatype array_name[row] [col];

// Methods to initialize 2D Array
--> int array [2][3] = {1,2,3,4,5,6};
--or--
--> int array [2][3] = {{1,2,3},
                        {4,5,6}};

## 3D Array
>> int array[3][2][4]; --> (3 2D arrays of [2][4])

# Taking 2D Array as input
> for(int i=0; i<row; i++){
    for(int j=0; j<columns; j++){
        cin>>arr[i][j];
    }
}

## Why Multidimensional Arrays?
> representing grids
> faster access
> predefined size