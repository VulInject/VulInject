FUN1 (void *VAR1, VAR2 *VAR3)
{
unsigned char VAR4[128 + 16];
unsigned VAR5 = (VAR3->VAR6[0] / 8) % 128;
unsigned int VAR7 = (240 - VAR5 - 1) % 128 + 1;

*VAR4 = 0x80;
memset (VAR4 + 1, 0, sizeof(VAR4) - 1);
VAR4[VAR7+15] = (VAR3->VAR6[0] >> 0) & 0xff;
VAR4[VAR7+14] = (VAR3->VAR6[0] >> 8) & 0xff;
VAR4[VAR7+13] = (VAR3->VAR6[0] >> 16) & 0xff;
VAR4[VAR7+12] = (VAR3->VAR6[0] >> 24) & 0xff;
VAR4[VAR7+11] = (VAR3->VAR6[0] >> 32) & 0xff;
VAR4[VAR7+10] = (VAR3->VAR6[0] >> 40) & 0xff;
VAR4[VAR7+9]  = (VAR3->VAR6[0] >> 48) & 0xff;
VAR4[VAR7+8]  = (VAR3->VAR6[0] >> 56) & 0xff;

VAR4[VAR7+7] = (VAR3->VAR6[1] >> 0) & 0xff;
VAR4[VAR7+6] = (VAR3->VAR6[1] >> 8) & 0xff;
VAR4[VAR7+5] = (VAR3->VAR6[1] >> 16) & 0xff;
VAR4[VAR7+4] = (VAR3->VAR6[1] >> 24) & 0xff;
VAR4[VAR7+3] = (VAR3->VAR6[1] >> 32) & 0xff;
VAR4[VAR7+2] = (VAR3->VAR6[1] >> 40) & 0xff;
VAR4[VAR7+1] = (VAR3->VAR6[1] >> 48) & 0xff;
VAR4[VAR7+0] = (VAR3->VAR6[1] >> 56) & 0xff;
FUN2 (VAR3, VAR4, VAR7 + 16);
{
int VAR8;
unsigned char *VAR9 = (unsigned char*)VAR1;

for (VAR8 = 0; VAR8 < 8; ++VAR8) {
VAR9[8*VAR8+7] = VAR3->VAR10[VAR8] & 0xFF;
VAR9[8*VAR8+6] = (VAR3->VAR10[VAR8] >> 8) & 0xFF;
VAR9[8*VAR8+5] = (VAR3->VAR10[VAR8] >> 16) & 0xFF;
VAR9[8*VAR8+4] = (VAR3->VAR10[VAR8] >> 24) & 0xFF;
VAR9[8*VAR8+3] = (VAR3->VAR10[VAR8] >> 32) & 0XFF;
VAR9[8*VAR8+2] = (VAR3->VAR10[VAR8] >> 40) & 0xFF;
VAR9[8*VAR8+1] = (VAR3->VAR10[VAR8] >> 48) & 0xFF;
VAR9[8*VAR8]   = (VAR3->VAR10[VAR8] >> 56) & 0xFF;
}
}
}