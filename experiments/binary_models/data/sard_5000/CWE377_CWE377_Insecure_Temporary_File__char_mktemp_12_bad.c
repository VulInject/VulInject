void CWE377_Insecure_Temporary_File__char_mktemp_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * filename;
            char tmpl[] = "fnXXXXXX";
            int fileDesc;
            filename = MKTEMP(tmpl);
            if (filename == NULL)
            {
                exit(1);
            }
            printLine(filename);
            /* FLAW: Open a temporary file using open() and flags that do not prevent a race condition */
            fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
    else
    {
        {
            char * filename;
            char tmpl[] = "fnXXXXXX";
            int fileDesc;
            filename = MKTEMP(tmpl);
            if (filename == NULL)
            {
                exit(1);
            }
            printLine(filename);
            /* FIX: Open a temporary file using open() and the O_CREAT and O_EXCL flags
            * NOTE: This is not a perfect solution, but it is the base case scenario */
            fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
}
