void CWE590_Free_Memory_Not_on_Heap__free_int_declare_15_bad()
{
    int * data;
    data = NULL; /* Initialize data */
    switch(6)
    {
    case 6:
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}
