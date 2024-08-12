static inline void FUN1(VAR1)(uint8_t VAR2[], int VAR3)
{
    VAR4 volatile(""
                     ""
                     ""
                     ""
                     ""
                     : ""(VAR2)
                     : ""((VAR5)-VAR3));
    int VAR6;
    VAR7 *VAR8 = VAR2;
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR8 -= VAR3;
        memcpy(VAR8, VAR2, 8);
    }
}