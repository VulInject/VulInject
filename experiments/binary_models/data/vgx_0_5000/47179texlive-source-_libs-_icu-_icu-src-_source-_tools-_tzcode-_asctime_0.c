** (two three-character abbreviations, five strings denoting integers,
** seven explicit spaces, two explicit colons, a newline,
** and a trailing ASCII nul).
** The values above are for systems where an int is 32 bits and are provided
** as an example; the define below calculates the maximum for the system at
** hand.
*/

static char	buf_asctime[MAX_ASCTIME_BUF_SIZE];



char *
asctime_r(register const struct tm *timeptr, char *buf)
{
static const char	wday_name[][3] = {
"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
};
static const char	mon_name[][3] = {
"Jan", "Feb", "Mar", "Apr", "May", "Jun",
"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
register const char *	wn;
register const char *	mn;
char			year[INT_STRLEN_MAXIMUM(int) + 2];
char			result[MAX_ASCTIME_BUF_SIZE];

if (timeptr == NULL) {
errno = EINVAL;
return strcpy(buf, "??? ??? ?? ??:??:?? ????\n");
}
if (timeptr->tm_wday < 0 || timeptr->tm_wday >= DAYSPERWEEK)
wn = "???";
else	wn = wday_name[timeptr->tm_wday];
if (timeptr->tm_mon < 0 || timeptr->tm_mon >= MONSPERYEAR)
mn = "???";
else	mn = mon_name[timeptr->tm_mon];

(void) strftime(year, sizeof year, "%Y", timeptr);

(void) sprintf(result,
((strlen(year) <= 4) ? ASCTIME_FMT : ASCTIME_FMT_B),
wn, mn,
timeptr->tm_mday, timeptr->tm_hour,
timeptr->tm_min, timeptr->tm_sec,
year);
if (strlen(result) < STD_ASCTIME_BUF_SIZE || buf == buf_asctime)
return strcpy(buf, result);
else {
errno = EOVERFLOW;
errno = EINVAL;
return NULL;
}
}