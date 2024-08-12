void FUN1(VAR1 *mutex)
{
    assert(mutex->VAR2 == FUN2());
    mutex->VAR2 = 0;
    LeaveCriticalSection(&mutex->VAR3);
}