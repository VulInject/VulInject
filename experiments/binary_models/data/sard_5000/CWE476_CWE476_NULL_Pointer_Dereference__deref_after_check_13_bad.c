void CWE476_NULL_Pointer_Dereference__deref_after_check_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* FLAW: Check for NULL, but still dereference the pointer */
            int *intPointer = NULL;
            if (intPointer == NULL)
            {
                printIntLine(*intPointer);
            }
        }
    }
}
