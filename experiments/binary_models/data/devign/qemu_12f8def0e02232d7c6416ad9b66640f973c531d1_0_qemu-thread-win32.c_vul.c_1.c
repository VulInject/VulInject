void FUN1(VAR1 *mutex)
{
    EnterCriticalSection(&mutex->VAR2);
    assert(mutex->VAR3 == 0);
    mutex->VAR3 = FUN2();
}