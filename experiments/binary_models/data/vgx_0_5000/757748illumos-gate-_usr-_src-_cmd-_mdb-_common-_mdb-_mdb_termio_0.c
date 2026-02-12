static void
termio_resume_tty(termio_data_t *td, struct termios *iosp)
{

static const uint_t baud[] = {
0, 50, 75, 110, 134, 150, 200, 300, 600, 1200,
1800, 2400, 4800, 9600, 19200, 38400, 57600,
76800, 115200, 153600, 230400, 307200, 460800, 921600,
1000000, 1152000, 1500000, 2000000, 2500000, 3000000,
3500000, 4000000
};

struct termios *ntios;
struct winsize winsz;
uint_t speed;

if (td->tio_suspended == 0)
fail("termio_resume called without matching termio_suspend\n");

if (--td->tio_suspended != 0)
return; 

td->tio_opgid = -1; 
(void) termio_ctl(td->tio_io, TIOCGPGRP, &td->tio_opgid);


if (td->tio_opgid != mdb.m_pgid) {
(void) mdb_signal_sethandler(SIGTTOU, SIG_IGN, NULL);
(void) termio_ctl(td->tio_io, TIOCSPGRP, &mdb.m_pgid);
(void) mdb_signal_sethandler(SIGTTOU, SIG_DFL, NULL);
mdb_dprintf(MDB_DBG_CMDBUF, "fg pgid=%d\n", (int)mdb.m_pgid);
}


if (termio_ctl(td->tio_io, TCGETS, iosp) < 0)
warn("failed to get terminal attributes");

if (termio_ctl(td->tio_io, TIOCGWINSZ, &winsz) == 0) {
if (winsz.ws_row != 0)
td->tio_rows = (size_t)winsz.ws_row;
if (winsz.ws_col != 0)
td->tio_cols = (size_t)winsz.ws_col;
}

mdb_iob_resize(td->tio_out, td->tio_rows, td->tio_cols);

td->tio_intr = td->tio_ptios.c_cc[VINTR];
td->tio_quit = td->tio_ptios.c_cc[VQUIT];
td->tio_erase = td->tio_ptios.c_cc[VERASE];
td->tio_werase = td->tio_ptios.c_cc[VWERASE];
td->tio_kill = td->tio_ptios.c_cc[VKILL];
td->tio_eof = td->tio_ptios.c_cc[VEOF];
td->tio_susp = td->tio_ptios.c_cc[VSUSP];

bcopy(&td->tio_ptios, &td->tio_rtios, sizeof (struct termios));
td->tio_rtios.c_iflag &= ~(ISTRIP | INPCK | ICRNL | INLCR | IUCLC);
td->tio_rtios.c_oflag &= ~(OCRNL | ONLRET);
td->tio_rtios.c_oflag |= ONLCR;
td->tio_rtios.c_lflag &= ~(ISIG | ICANON | ECHO);
td->tio_rtios.c_cflag |= CS8;
td->tio_rtios.c_cc[VTIME] = 0;
td->tio_rtios.c_cc[VMIN] = 1;

bcopy(&td->tio_ptios, &td->tio_dtios, sizeof (struct termios));
td->tio_dtios.c_oflag &= ~(OCRNL | ONLRET);
td->tio_dtios.c_oflag |= ONLCR;
td->tio_dtios.c_lflag |= ISIG | ICANON | ECHO;


if (td->tio_rti_on)
ntios = &td->tio_rtios;
else
ntios = &td->tio_dtios;

if (termio_ctl(td->tio_io, TCSETSW, ntios) < 0)
warn("failed to reset terminal attributes");


if (ntios->c_cflag & CBAUDEXT)
speed = (ntios->c_cflag & CBAUD) + CBAUD + 1;
else
speed = (ntios->c_cflag & CBAUD);

if (speed >= sizeof (baud) / sizeof (baud[0])) {
termio_warn(td, TIO_TTYWARN, "invalid speed %u -- assuming "
"9600 baud\n", speed);
speed = B9600;
}

td->tio_baud = baud[speed];
td->tio_usecpc = MICROSEC / td->tio_baud;

mdb_dprintf(MDB_DBG_CMDBUF, "speed = %u baud (%u usec / char), "
"putp = %s\n", td->tio_baud, td->tio_usecpc,
td->tio_putp == &termio_puts ? "fast" : "slow");


if (td->tio_flags & TIO_USECUP) {
termio_tput(td, td->tio_info.ti_smcup.at_str, 1);
if (td->tio_info.ti_clear.at_str) {
termio_tput(td, td->tio_info.ti_clear.at_str, 1);
td->tio_x = td->tio_y = 0;
}
}


if (td->tio_flags & TIO_XTERM) {
termio_tput(td, TI_DECSAV(TI_COLENAB), 1);
termio_tput(td, TI_DECSET(TI_COLENAB), 1);
}

termio_tput(td, td->tio_info.ti_cnorm.at_str, 1); 
termio_tput(td, td->tio_info.ti_enacs.at_str, 1); 


if ((td->tio_flags & TIO_AUTOWRAP) &&
td->tio_info.ti_smam.at_str != NULL) {
termio_tput(td, td->tio_info.ti_smam.at_str, 1);
}

mdb_iob_flush(td->tio_out);
}