void CWE398_Poor_Code_Quality__empty_block_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: An empty block has no effect */
        {
        }
        printLine("Hello from bad()");
    }
    else
    {
        /* FIX: Do not include an empty block */
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
