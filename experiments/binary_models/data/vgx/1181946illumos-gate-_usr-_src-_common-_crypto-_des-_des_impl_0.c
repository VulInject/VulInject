static VAR1
FUN1(uint64_t VAR2, uint64_t VAR3)
{
uint32_t VAR4, VAR5;

VAR5 = VAR6[((VAR2 >> 55) & 240) | ((VAR3 >> 59) & 15)] |
(VAR6[((VAR2 >> 35) & 240) | ((VAR3>>39) & 15)] >> 2) |
(VAR6[((VAR2 >> 23) & 240) | ((VAR3 >> 27) & 15)] >> 4) |
(VAR6[((VAR2 >> 6) & 240) | ((VAR3 >> 10) & 15)] >> 6);

VAR4 = VAR6[((VAR2 >> 41) & 240) | ((VAR3 >> 45) & 15)] |
(VAR6[((VAR2 >> 29) & 240) | ((VAR3 >> 33) & 15)] >> 2) |
(VAR6[((VAR2 >> 12) & 240) | ((VAR3 >> 16) & 15)] >> 4) |
(VAR6[(VAR2 & 240) | (VAR3 >> 4) & 15] >> 6);

return ((((VAR1)VAR4) << 32) | (VAR1)VAR5);

}