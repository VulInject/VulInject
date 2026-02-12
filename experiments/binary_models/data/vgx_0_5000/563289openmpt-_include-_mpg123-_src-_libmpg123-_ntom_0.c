int synth_ntom_set_step(mpg123_handle *fr)
{
long m,n;
m = frame_freq(fr);
n = fr->af.rate;
if(VERBOSE2)
fprintf(stderr,"Init rate converter: %ld->%ld\n",m,n);

if(n > NTOM_MAX_FREQ || m > NTOM_MAX_FREQ || m <= 0 || n <= 0) {
if(NOQUIET) error("NtoM converter: illegal rates");
fr->err = MPG123_BAD_RATE;
return -1;
}

n *= NTOM_MUL;
fr->ntom_step = (unsigned long) n / m;

if(fr->ntom_step > (unsigned long)NTOM_MAX*NTOM_MUL) {
if(NOQUIET) error3("max. 1:%i conversion allowed (%lu vs %lu)!", NTOM_MAX, fr->ntom_step, (unsigned long)8*NTOM_MUL);
fr->err = MPG123_BAD_RATE;
return -1;
}

fr->ntom_val[0] = fr->ntom_val[1] = ntom_val(fr, fr->num);
return 0;
}