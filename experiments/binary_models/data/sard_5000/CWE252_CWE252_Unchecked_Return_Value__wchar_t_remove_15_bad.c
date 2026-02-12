void CWE252_Unchecked_Return_Value__wchar_t_remove_15_bad()
{
    switch(6)
    {
    case 6:
        /* FLAW: Do not check the return value */
        REMOVE(L"removemebad.txt");
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
