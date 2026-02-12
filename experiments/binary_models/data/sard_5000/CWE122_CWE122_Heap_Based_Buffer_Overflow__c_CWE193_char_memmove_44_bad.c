void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_44_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = badSink;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}
