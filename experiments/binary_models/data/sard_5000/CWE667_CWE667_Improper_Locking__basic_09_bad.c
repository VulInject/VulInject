void CWE667_Improper_Locking__basic_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            static stdThreadLock badLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&badLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(badLock);
            /* FLAW: Do not release the lock */
        }
    }
}
