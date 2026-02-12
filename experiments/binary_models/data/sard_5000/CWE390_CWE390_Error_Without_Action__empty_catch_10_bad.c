void bad()
{
    if(globalTrue)
    {
        {
            try
            {
                string stringHello = "hello";
                string stringSubstring = stringHello.substr(rand(), rand());
                printLine(stringSubstring.c_str());
            }
            catch (out_of_range &)
            {
                /* FLAW: Catch, but do not handle the out_of_range error */
            }
        }
    }
}
