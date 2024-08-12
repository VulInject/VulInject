* Revision 1.11  2001/04/12 17:43:36  VAR1
*
* Change logging and added autotest to VAR2
*
* Revision 1.10  2001/03/02 14:24:23  VAR1
*
* Fix thread detection for VAR3
*
* Revision 1.9  2001/01/04 13:16:25  VAR1
*
* Add support for GNU portable threads and tidy up some UNICODE VAR4
* VAR5
*
* Revision 1.8  2000/12/18 11:51:59  VAR6
*
* stats specific mode to VAR7.
*
* Revision 1.7  2000/12/18 11:03:58  VAR6
*
* Add support for the collection and retrieval of handle VAR8.
*
* Revision 1.6  2000/12/17 11:17:22  VAR1
*
* Remove VAR9
*
* Revision 1.5  2000/12/17 11:00:32  VAR1
*
* Add thread safe bits to VAR10
*
* Revision 1.4  2000/11/29 17:53:59  VAR1
*
* Fix race VAR11
*
* Revision 1.3  2000/10/25 09:39:42  VAR1
*
* Clear handles VAR12, to avoid VAR13
*
* Revision 1.2  2000/09/08 08:58:17  VAR1
*
* Add SQL_DRIVER_HDESC to VAR14
*
* Revision 1.1.1.1  2000/09/04 16:42:52  VAR1
* Imported VAR15
*
* Revision 1.16  2000/06/29 17:27:52  VAR16
*
* Add fast validate VAR17
*
* Revision 1.15  2000/06/27 17:34:12  VAR16
*
* Fix a problem when the second part of the connect failed a seg VAR18
* was generated in the error VAR19
*
* Revision 1.14  2001/03/28 23:09:57  VAR16
*
* Fix VAR20
*
* Revision 1.13  2000/03/11 15:55:47  VAR16
*
* A few more changes and bug FUN1 (see VAR21)
*
* Revision 1.12  2000/02/25 00:02:00  VAR16
*
* Add a patch to support IBM VAR22, and Solaris VAR23
*
* Revision 1.11  2000/02/22 22:14:45  VAR16
*
* Added support for solaris VAR23
* Added check to overcome bug in VAR24
* Fixed bug in descriptors and ODBC 3 VAR25
*
* Revision 1.10  1999/12/11 13:01:57  VAR16
*
* Add some fixes to the Postgres driver for long VAR26
*
* Revision 1.9  1999/12/01 09:20:07  VAR16
*
* Fix some threading VAR27
*
* Revision 1.8  1999/11/13 23:41:01  VAR16
*
* Alter the way DM logging VAR28
* Upgrade the Postgres driver to 6.4.6
*
* Revision 1.7  1999/11/10 03:51:34  VAR16
*
* Update the error reporting in the DM to enable ODBC 3 and 2 calls VAR29
* work at the same VAR30
*
* Revision 1.6  1999/08/05 18:59:49  VAR16
*
* Typo error found by Greg VAR31
*
* Revision 1.5  1999/08/03 21:47:39  VAR32
* Moving to VAR33: changed files in VAR34
*
* Revision 1.4  1999/07/10 21:10:17  VAR16
*
* Adjust error sqlstate from driver VAR35, depending on VAR36
* FUN2 (VAR37/3)
*
* Revision 1.3  1999/07/04 21:05:08  VAR16
*
* Add LGPL Headers to VAR38
*
* Revision 1.2  1999/06/30 23:56:56  VAR16
*
* Add initial thread safety VAR38
*
* Revision 1.1.1.1  1999/05/29 13:41:09  VAR39
* first go at VAR40
*
* Revision 1.1.1.1  1999/05/27 18:23:18  VAR41
* Imported VAR42
*
* Revision 1.3  1999/05/09 23:27:11  VAR1
* All the API done VAR43
*
* Revision 1.2  1999/05/03 19:50:43  VAR1
* Another check VAR44
*
* Revision 1.1  1999/04/25 23:06:11  VAR1
* Initial VAR45
*
*


static char const VAR46[]= "";



static DMHENV VAR47;
static DMHDBC VAR48;
static DMHSTMT VAR49;
static DMHDESC VAR50;






static pth_mutex_t VAR51 = VAR52;
static pth_mutex_t VAR53 = VAR52;
static pth_mutex_t VAR54 = VAR52;
static pth_mutex_t VAR55 = VAR52;
static int VAR56 = 0;

static pth_cond_t VAR57 = VAR58;

static int FUN3( VAR59 *mutex )
{
if ( !VAR56 )
{
FUN4();
VAR56 = 1;
}
return FUN5( mutex, 0, NULL );
}