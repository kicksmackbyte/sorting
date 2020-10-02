void bubbleSort(int sort[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size - i; ++j)
        {
            if(sort[j] > sort[j + 1])
            {
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
}
