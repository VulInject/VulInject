#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(float VAR4)
{
    {
        int VAR5 = (int)(100.0 / VAR4);
        FUN2(VAR5);
    }
}
void FUN3()
{
    float VAR4;
    VAR4 = 0.0F;
    VAR4 = 0.0F;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}