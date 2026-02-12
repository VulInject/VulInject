void CWE390_Error_Without_Action__fopen_16_bad()
{
    while(1)
    {
        {
            FILE * fileDesc = NULL;
            fileDesc = fopen("file.txt", "w+");
            /* FLAW: Check to see if fopen failed, but do nothing about it */
            if (fileDesc == NULL)
            {
                /* do nothing */
            }
            fclose(fileDesc);
        }
        break;
    }
}
