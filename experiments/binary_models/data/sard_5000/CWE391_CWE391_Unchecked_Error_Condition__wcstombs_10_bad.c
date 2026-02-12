void CWE391_Unchecked_Error_Condition__wcstombs_10_bad()
{
    if(globalTrue)
    {
        {
            size_t bytesTranslated = 0;
            char charString[100];
            charString[0] = '\0';
            bytesTranslated = wcstombs((char *)&charString, L"\xffff", 100);
            /* FLAW: Do not check to see if wcstombs() failed */
            printUnsignedLine(bytesTranslated);
            printLine(charString);
        }
    }
}
