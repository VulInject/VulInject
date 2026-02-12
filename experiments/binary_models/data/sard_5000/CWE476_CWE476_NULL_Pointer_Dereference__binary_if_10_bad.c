void CWE476_NULL_Pointer_Dereference__binary_if_10_bad()
{
    if(globalTrue)
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
            /* FLAW: Using a single & in the if statement will cause both sides of the expression to be evaluated
             * thus causing a NPD */
            if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
    }
}
