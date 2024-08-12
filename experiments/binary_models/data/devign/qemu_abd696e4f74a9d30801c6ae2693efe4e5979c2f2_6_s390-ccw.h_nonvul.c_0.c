unsigned long FUN1(ulong VAR1, ulong VAR2, ulong VAR3, void *VAR4);
bool FUN2(struct subchannel_id VAR5);
void FUN3(struct subchannel_id VAR5);
int FUN4(ulong VAR6, void *VAR4);
int FUN5(void);
int FUN6(void);
static inline void *memset(void *VAR7, int VAR8, size_t VAR9)
{
    int VAR10;
    unsigned char *VAR11 = VAR7;
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        VAR11[VAR10] = VAR8;
    }
    return VAR7;
}