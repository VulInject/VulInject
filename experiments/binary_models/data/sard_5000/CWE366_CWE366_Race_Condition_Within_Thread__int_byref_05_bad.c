void CWE366_Race_Condition_Within_Thread__int_byref_05_bad()
{
    if(staticTrue)
    {
        {
            stdThread threadA = NULL;
            stdThread threadB = NULL;
            int valBadSink;
            valBadSink = 0;
            if (!stdThreadCreate(helperBad, (void*)&valBadSink, &threadA))
            {
                threadA = NULL;
            }
            if (!stdThreadCreate(helperBad, (void*)&valBadSink, &threadB))
            {
                threadB = NULL;
            }
            if (threadA && stdThreadJoin(threadA))
            {
                stdThreadDestroy(threadA);
            }
            if (threadB && stdThreadJoin(threadB))
            {
                stdThreadDestroy(threadB);
            }
            printIntLine(valBadSink);
        }
    }
}
