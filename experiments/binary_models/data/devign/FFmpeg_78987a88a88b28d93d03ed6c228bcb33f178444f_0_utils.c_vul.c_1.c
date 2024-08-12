static int FUN1(int VAR1)
{
    if (VAR1 < 60 * 12)
        return VAR1 * 1001;
    else
        return ((const int[]){24, 30, 60, 12, 15})[VAR1 - 60 * 12] * 1000 * 12;
}