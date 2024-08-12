static bool FUN1(const unsigned char *VAR1) {
return (VAR1[32] == (VAR1[0] ^ VAR2[VAR1[29]] ^ 1) \
&& VAR1[33] == (VAR1[1] ^ VAR2[VAR1[30]]) \
&& VAR1[34] == (VAR1[2] ^ VAR2[VAR1[31]]) \
&& VAR1[35] == (VAR1[3] ^ VAR2[VAR1[28]])
&& VAR1[36] == (VAR1[4] ^ VAR1[32]) \
&& VAR1[37] == (VAR1[5] ^ VAR1[33]) \
&& VAR1[38] == (VAR1[6] ^ VAR1[34]) \
&& VAR1[39] == (VAR1[7] ^ VAR1[35]));
}