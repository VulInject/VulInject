#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#VAR1 <VAR4.VAR3>
#define FUN1 ((VAR5)1199163600) 
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            time_t VAR6;
            FUN5(&VAR6);
            if (VAR6 > VAR7)
            {
                FUN6("");
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}