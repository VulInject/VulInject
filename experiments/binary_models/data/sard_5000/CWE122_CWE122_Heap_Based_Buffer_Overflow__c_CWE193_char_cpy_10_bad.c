void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_10_bad()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
        free(data);
    }
}
