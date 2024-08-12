#VAR1 ""
#VAR1 <VAR2.VAR3>
float FUN1(float VAR4)
{
    fscanf (stdin, "", &VAR4);
    return VAR4;
}
void FUN2()
{
    float VAR4;
    VAR4 = 0.0F;
    VAR4 = FUN1(VAR4);
    {
        int VAR5 = (int)(100.0 / VAR4);
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}