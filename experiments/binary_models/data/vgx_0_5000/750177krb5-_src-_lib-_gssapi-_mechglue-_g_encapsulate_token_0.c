* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
*/


OM_uint32 KRB5_CALLCONV
gss_encapsulate_token(gss_const_buffer_t input_token,
gss_const_OID token_oid,
gss_buffer_t output_token)
{
unsigned int tokenSize;
unsigned char *buf;

if (input_token == GSS_C_NO_BUFFER || token_oid == GSS_C_NO_OID)
return GSS_S_CALL_INACCESSIBLE_READ;

if (output_token == GSS_C_NO_BUFFER)
return GSS_S_CALL_INACCESSIBLE_WRITE;

tokenSize = g_token_size(token_oid, input_token->length);

assert(tokenSize > 2);
tokenSize -= 2; 

output_token->value = gssalloc_malloc(tokenSize);
if (output_token->value == NULL)
return GSS_S_FAILURE;

buf = output_token->value;

g_make_token_header(token_oid, input_token->length, &buf, -1);
memcpy(buf, input_token->value, input_token->length);
output_token->length = tokenSize;

return GSS_S_COMPLETE;
}