#VAR1 ""
typedef struct VAR2
{
    struct VAR2 *VAR3;
    struct VAR2 *VAR4;
} VAR5;
typedef struct name_0    linkedList VAR6;
} VAR7;
static VAR5 *VAR8, *VAR9;
void FUN1(name_1 VAR10)
{
    VAR8 = VAR10.VAR6.VAR4;
    VAR9 = VAR10.VAR6.VAR3;
    VAR8->VAR3 = VAR9;
    VAR9->VAR4 = VAR8;
}
void FUN2()
{
    name_1 VAR10;
    void (*VAR11) (VAR7) = VAR12;
    linkedList VAR13 = { &VAR13, &VAR13 };
    VAR10.VAR6.VAR3 = VAR13.VAR3;
    VAR10.VAR6.VAR4 = VAR13.VAR4;
    VAR13.VAR3 = &VAR10.VAR6;
    VAR13.VAR4 = &VAR10.VAR6;
    if (fgets((char*)&VAR10, sizeof(VAR10), stdin) == NULL)
    {
        FUN3(1);
    }
    FUN4(VAR10);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}