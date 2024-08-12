static struct VAR1 FUN1(struct VAR2 *VAR3)
{
struct r600_audio_pin VAR4;
uint32_t VAR5;

VAR5 = FUN2(VAR6);


VAR4.VAR7 = (VAR5 & 0x7) + 1;


switch ((VAR5 & 0xF0) >> 4) {
case 0x0:
VAR4.VAR8 = 8;
break;
case 0x1:
VAR4.VAR8 = 16;
break;
case 0x2:
VAR4.VAR8 = 20;
break;
case 0x3:
VAR4.VAR8 = 24;
break;
case 0x4:
VAR4.VAR8 = 32;
break;
default:
FUN3(VAR3->VAR9, "",
(int)VAR5);
VAR4.VAR8 = 16;
}


if (VAR5 & 0x4000)
VAR4.VAR10 = 44100;
else
VAR4.VAR10 = 48000;
VAR4.VAR10 *= ((VAR5 >> 11) & 0x7) + 1;
VAR4.VAR10 /= ((VAR5 >> 8) & 0x7) + 1;

VAR5 = FUN2(VAR11);


VAR4.VAR12 = VAR5 & 0xff;


VAR4.VAR13 = (VAR5 >> 8) & 0xff;

return VAR4;
}