OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

** END_ICS_COPYRIGHT7   ****************************************/







uint8_t *port_pair_warnings;

uint8_t incorrect_ca_warnings = 0;
uint8_t invalid_isl_found = 0;

Lock_t sm_datelineSwitchGUIDLock;
uint64_t sm_datelineSwitchGUID;





static int
_coord_to_string(Topology_t *topop, int8_t *c, char *str)
{
uint8_t i, l, n = 0;
DorTopology_t	*dorTop = (DorTopology_t *)topop->routingModule->data;

if (dorTop->numDimensions == 0) {
l = SM_DOR_MAX_DIMENSIONS;
} else {
l = MIN(dorTop->numDimensions, SM_DOR_MAX_DIMENSIONS);
}
n += sprintf(str, "(");
for (i = 0; i < l; ++i) {
n += sprintf(str + n, "%d", c[i]);
if (i < l - 1)
n += sprintf(str + n, ",");
}
n += sprintf(str + n, ")");
return n;
}