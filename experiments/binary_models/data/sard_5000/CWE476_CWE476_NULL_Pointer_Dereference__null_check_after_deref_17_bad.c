void CWE476_NULL_Pointer_Dereference__null_check_after_deref_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
            /* FLAW: Check for NULL after dereferencing the pointer. This NULL check is unnecessary. */
            if (intPointer != NULL)
            {
                *intPointer = 10;
            }
            printIntLine(*intPointer);
        }
    }
}
