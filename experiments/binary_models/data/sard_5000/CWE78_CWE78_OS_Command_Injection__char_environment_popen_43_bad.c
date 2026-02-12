void bad()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    badSource(data);
    {
        FILE *pipe;
        /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
