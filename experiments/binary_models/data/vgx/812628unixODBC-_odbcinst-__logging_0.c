* VAR1, VAR2., 59 Temple VAR3, Suite 330, VAR4, MA  02111-1307  VAR5
*
**********************************************************************
*
* $VAR6: VAR7.VAR8,v 1.5 2009/02/18 17:59:27 lurcher VAR9 $
*
* $VAR10: VAR7.VAR8,VAR11 $
* Revision 1.5  2009/02/18 17:59:27  VAR12
* Shift to using VAR13.VAR14, the compile lines were making it hard to spot VAR15
*
* Revision 1.4  2008/05/12 13:07:21  VAR12
* Push a couple of small changes back into VAR16, ready for new VAR17
*
* Revision 1.3  2008/02/15 15:47:12  VAR12
* Add thread protection around ini VAR18
*
* Revision 1.2  2007/11/27 17:52:57  VAR19
* - changes made during QT4 VAR20
*
* Revision 1.1.1.1  2001/10/17 16:40:30  VAR12
*
* First upload to VAR21
*
* Revision 1.1.1.1  2000/09/04 16:42:53  VAR22
* Imported VAR23
*
* Revision 1.1  1999/07/15 06:23:39  VAR24
*
* Added functions to remove the need for _init and VAR25
*
*




static pth_mutex_t VAR26 = VAR27;
static int VAR28 = 0;

static int FUN1( void )
{
if ( !VAR28 )
{
FUN2();
VAR28 = 1;
}
return FUN3( &VAR26, 0, NULL );
}