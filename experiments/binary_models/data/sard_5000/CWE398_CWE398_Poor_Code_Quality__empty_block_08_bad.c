void CWE398_Poor_Code_Quality__empty_block_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: An empty block has no effect */
        {
        }
        printLine("Hello from bad()");
    }
}
