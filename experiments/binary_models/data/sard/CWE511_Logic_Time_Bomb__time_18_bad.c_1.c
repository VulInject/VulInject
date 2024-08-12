#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#VAR1 <VAR4.VAR3>
#define FUN1 ((VAR5)1199163600) 
void FUN2()
{
    goto VAR6;
VAR6:
    {
        time_t VAR7;
        FUN3(&VAR7);
        if (VAR7 > VAR8)
        {
            FUN4("");
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}