void bad()
{
    char * data;
    unionType myUnion;
    data = NULL;
    /* FLAW: Use a small buffer */
    data = new char[50];
    memset(data, 'A', 50-1); /* fill with 'A's */
    data[50-1] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: using memcpy with the length of the dest where data
             * could be smaller than dest causing buffer overread */
            memcpy(dest, data, strlen(dest)*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
            delete [] data;
        }
    }
}
