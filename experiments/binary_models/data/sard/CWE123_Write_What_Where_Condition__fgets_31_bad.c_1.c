#VAR1 ""
typedef struct VAR2
{
    struct VAR2 *VAR3;
    struct VAR2 *VAR4;
} VAR5;
typedef struct name_0    linkedList VAR6;
} VAR7;
static VAR5 *VAR8, *VAR9;
void FUN1()
{
    name_1 VAR10;
    linkedList VAR11 = { &VAR11, &VAR11 };
    VAR10.VAR6.VAR3 = VAR11.VAR3;
    VAR10.VAR6.VAR4 = VAR11.VAR4;
    VAR11.VAR3 = &VAR10.VAR6;
    VAR11.VAR4 = &VAR10.VAR6;
    if (fgets((char*)&VAR10, sizeof(VAR10), stdin) == NULL)
    {
        FUN2(1);
    }
    {
        name_1 VAR12 = VAR10;
        name_1 VAR10 = VAR12;
        VAR8 = VAR10.VAR6.VAR4;
        VAR9 = VAR10.VAR6.VAR3;
        VAR8->VAR3 = VAR9;
        VAR9->VAR4 = VAR8;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}