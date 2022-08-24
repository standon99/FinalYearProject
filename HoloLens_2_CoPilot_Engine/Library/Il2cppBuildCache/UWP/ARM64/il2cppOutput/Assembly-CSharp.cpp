#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// Adjust_Icon
struct Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// ServerTwo
struct ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// airSpaceLogic
struct airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801;
// collisionLogic
struct collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843;
// detectLandingPad
struct detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral072BCB0EEDCBCD311C7526F0FE7D578A0FC64B01;
IL2CPP_EXTERN_C String_t* _stringLiteral0C09B7AF657448F2C999E8D9FFA1C8D5BFEBED4D;
IL2CPP_EXTERN_C String_t* _stringLiteral0CAF420A31B11C3ADE603CE67220A90A799A4696;
IL2CPP_EXTERN_C String_t* _stringLiteral168D3013244BA5E126C6436113AB47EDAFCDF442;
IL2CPP_EXTERN_C String_t* _stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2201A69531C8EA04A5DD5D701F16C4B41AE8C0;
IL2CPP_EXTERN_C String_t* _stringLiteral4865B45661333E66776B7F38F28C98095CE99A97;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA73518D20ECAB2A83D3253EF7CF445A3E14CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral6E6888463A184465AA1379F75B191142A7270E82;
IL2CPP_EXTERN_C String_t* _stringLiteral71E68ECF684BFE9965AD7C867BCC879CF6E1ED8F;
IL2CPP_EXTERN_C String_t* _stringLiteral7B1FA2D89DC4B9961BF40637CD96D5104911972F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5E181B80CBC593BBB805B871708B130AEAB5E6;
IL2CPP_EXTERN_C String_t* _stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E;
IL2CPP_EXTERN_C String_t* _stringLiteral83B9938338740566720F8296DC2F98DDC1CBD913;
IL2CPP_EXTERN_C String_t* _stringLiteral899B1EDBF58C20C8EDDBA7C4F3470FE036A79277;
IL2CPP_EXTERN_C String_t* _stringLiteral9B63BCE3B59E7D452A5694DDD704412466543663;
IL2CPP_EXTERN_C String_t* _stringLiteral9B68D9BE17D97C23E418C203DE7BFAF82C164979;
IL2CPP_EXTERN_C String_t* _stringLiteralA86B6F0BC726E244919862B6680176EC14F5E968;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37;
IL2CPP_EXTERN_C String_t* _stringLiteralAC73C0E9AAD53946C0BB0FD5CBEC635D010DD8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralAC835C4485111B4C6FD3DA5893DAB5522B5B53E1;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E26753E12DFA082CEF6D2CF096982CB98A4497;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B55ADE103E40A14E2C3D11CC6D8125B34A8178;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerTwo_networkCode_m1B6303CAB21CACE58EED2A527841008331D6F555_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Adjust_Icon
struct Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Adjust_Icon::desiredPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPos_4;
	// UnityEngine.Quaternion Adjust_Icon::desiredRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___desiredRot_5;
	// UnityEngine.Vector3 Adjust_Icon::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_6;
	// UnityEngine.Quaternion Adjust_Icon::startRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startRot_7;
	// System.Single Adjust_Icon::desiredArrowScale
	float ___desiredArrowScale_8;
	// UnityEngine.GameObject Adjust_Icon::Arrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Arrow_9;
	// UnityEngine.GameObject Adjust_Icon::Collider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Collider_10;
};

// ServerTwo
struct ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Threading.Thread ServerTwo::SocketThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___SocketThread_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ServerTwo::keepReading
	bool ___keepReading_5;
	// System.Net.IPAddress ServerTwo::setIpAddress
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___setIpAddress_7;
	// System.Int32 ServerTwo::port
	int32_t ___port_8;
	// System.Single ServerTwo::receivedX
	float ___receivedX_10;
	// System.Single ServerTwo::receivedY
	float ___receivedY_11;
	// System.Single ServerTwo::receivedZ
	float ___receivedZ_12;
	// System.Single ServerTwo::receivedAX
	float ___receivedAX_13;
	// System.Single ServerTwo::receivedAY
	float ___receivedAY_14;
	// System.Single ServerTwo::receivedAZ
	float ___receivedAZ_15;
	// System.Single ServerTwo::receivedMag
	float ___receivedMag_16;
	// System.Int32 ServerTwo::iX
	int32_t ___iX_17;
	// System.Int32 ServerTwo::iY
	int32_t ___iY_18;
	// System.Int32 ServerTwo::iZ
	int32_t ___iZ_19;
	// System.Single[] ServerTwo::posAx
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___posAx_20;
	// System.Single[] ServerTwo::posAy
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___posAy_21;
	// System.Single[] ServerTwo::posAz
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___posAz_22;
	// System.Single ServerTwo::lastPosX
	float ___lastPosX_23;
	// System.Single ServerTwo::lastPosY
	float ___lastPosY_24;
	// System.Single ServerTwo::lastPosZ
	float ___lastPosZ_25;
	// System.Single ServerTwo::cPosX
	float ___cPosX_26;
	// System.Single ServerTwo::cPosY
	float ___cPosY_27;
	// System.Single ServerTwo::cPosZ
	float ___cPosZ_28;
	// System.Net.Sockets.Socket ServerTwo::listener
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___listener_29;
	// System.Net.Sockets.Socket ServerTwo::handler
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___handler_30;
};

struct ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields
{
	// System.String ServerTwo::localIP
	String_t* ___localIP_6;
	// System.Int32 ServerTwo::velocityGenBracket
	int32_t ___velocityGenBracket_9;
};

// airSpaceLogic
struct airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean airSpaceLogic::activated
	bool ___activated_4;
	// System.Single airSpaceLogic::timer
	float ___timer_5;
	// System.Single airSpaceLogic::startTime
	float ___startTime_6;
	// System.Single airSpaceLogic::endTime
	float ___endTime_7;
	// System.Single airSpaceLogic::deltaTime
	float ___deltaTime_8;
	// System.Single airSpaceLogic::timeThreshold
	float ___timeThreshold_9;
};

// collisionLogic
struct collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single collisionLogic::colourIntensity
	float ___colourIntensity_4;
};

// detectLandingPad
struct detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject detectLandingPad::Icon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Icon_4;
	// UnityEngine.GameObject detectLandingPad::Collider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Collider_5;
	// UnityEngine.Quaternion detectLandingPad::stickAngle
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___stickAngle_6;
	// System.Single detectLandingPad::mag
	float ___mag_7;
	// UnityEngine.Vector3 detectLandingPad::current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_8;
	// System.Boolean detectLandingPad::showCollider
	bool ___showCollider_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ServerTwo>()
inline ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Adjust_Icon::fetchNewPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Adjust_Icon_fetchNewPos_m8DA5DE03F2F8AB824EAA6D2C300F5A49065D98D4 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Adjust_Icon::fetchNewRot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Adjust_Icon_fetchNewRot_mD17AF5D296E27D17E3053EC85B6AF683F1A6747D (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) ;
// System.Void Adjust_Icon::RescaleArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Icon_RescaleArrow_m2EE4F3E97ACFA25CCA25A04BBE666CBCE178EF24 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<airSpaceLogic>()
inline airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70 (bool ___value0, const RuntimeMethod* method) ;
// System.Void ServerTwo::startServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_startServer_m169D53538F641A9F21E8465D0F76AA4B3070B60A (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_mF728787FF8A38620054B934FD08E021460A7C14D (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String ServerTwo::getIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerTwo_getIPAddress_m9C41E7DDA27702E3D7F01056CA8C0012AF6A657E (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* Dns_GetHostAddresses_m0592CB7DB3F5665C412BCBE8297F198748114F90 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEP0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___backlog0, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___reuseSocket0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void ServerTwo::stopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_stopServer_m5867921C9FCBEF7ADBB2D4BA34D2EC49FBFED8F5 (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C (String_t* ___ipString0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Adjust_Icon::fetchNewPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Adjust_Icon_fetchNewPos_m8DA5DE03F2F8AB824EAA6D2C300F5A49065D98D4 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredPos = new Vector3(gameObject.GetComponent<ServerTwo>().receivedX, gameObject.GetComponent<ServerTwo>().receivedY, gameObject.GetComponent<ServerTwo>().receivedZ);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_1;
		L_1 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_0, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2 = L_1->___receivedX_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_4;
		L_4 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_3, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->___receivedY_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_7;
		L_7 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_6, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_7);
		float L_8 = L_7->___receivedZ_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		__this->___desiredPos_4 = L_9;
		// return desiredPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___desiredPos_4;
		return L_10;
	}
}
// UnityEngine.Quaternion Adjust_Icon::fetchNewRot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Adjust_Icon_fetchNewRot_mD17AF5D296E27D17E3053EC85B6AF683F1A6747D (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float angleX = gameObject.GetComponent<ServerTwo>().receivedAX;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_1;
		L_1 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_0, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2 = L_1->___receivedAX_13;
		V_0 = L_2;
		// float angleY = gameObject.GetComponent<ServerTwo>().receivedAY;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_4;
		L_4 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_3, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->___receivedAY_14;
		V_1 = L_5;
		// float angleZ = gameObject.GetComponent<ServerTwo>().receivedAZ;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_7;
		L_7 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_6, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_7);
		float L_8 = L_7->___receivedAZ_15;
		V_2 = L_8;
		// desiredRot = Quaternion.Euler(angleY, -1 * angleZ, angleX);
		float L_9 = V_1;
		float L_10 = V_2;
		float L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_9, ((float)il2cpp_codegen_multiply((-1.0f), L_10)), L_11, NULL);
		__this->___desiredRot_5 = L_12;
		// return desiredRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___desiredRot_5;
		return L_13;
	}
}
// System.Void Adjust_Icon::RescaleArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Icon_RescaleArrow_m2EE4F3E97ACFA25CCA25A04BBE666CBCE178EF24 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredArrowScale = gameObject.GetComponent<ServerTwo>().receivedMag/2.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_1;
		L_1 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_0, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2 = L_1->___receivedMag_16;
		__this->___desiredArrowScale_8 = ((float)(L_2/(2.5f)));
		// if (desiredArrowScale < 0.3) desiredArrowScale = 0.15f;
		float L_3 = __this->___desiredArrowScale_8;
		if ((!(((double)((double)L_3)) < ((double)(0.29999999999999999)))))
		{
			goto IL_0039;
		}
	}
	{
		// if (desiredArrowScale < 0.3) desiredArrowScale = 0.15f;
		__this->___desiredArrowScale_8 = (0.150000006f);
	}

IL_0039:
	{
		// Arrow.transform.localScale = new Vector3(desiredArrowScale, desiredArrowScale, desiredArrowScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Arrow_9;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		float L_6 = __this->___desiredArrowScale_8;
		float L_7 = __this->___desiredArrowScale_8;
		float L_8 = __this->___desiredArrowScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void Adjust_Icon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Icon_Start_m23DDD69F3DE66393FFA23E416DDD02CC8606E9CA (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072BCB0EEDCBCD311C7526F0FE7D578A0FC64B01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899B1EDBF58C20C8EDDBA7C4F3470FE036A79277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B63BCE3B59E7D452A5694DDD704412466543663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPos_6;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// transform.rotation = startRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___startRot_7;
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_3, NULL);
		// Arrow = GameObject.Find("ArrowContainer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral899B1EDBF58C20C8EDDBA7C4F3470FE036A79277, NULL);
		__this->___Arrow_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Arrow_9), (void*)L_4);
		// transform.Find("ArrowContainer/ArrowHead").GetComponent<MeshRenderer>().material.color = Color.red;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral072BCB0EEDCBCD311C7526F0FE7D578A0FC64B01, NULL);
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_6, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		// transform.Find("ArrowContainer/ArrowStem").GetComponent<MeshRenderer>().material.color = Color.blue;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_10, _stringLiteral9B63BCE3B59E7D452A5694DDD704412466543663, NULL);
		NullCheck(L_11);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_12;
		L_12 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_11, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		NullCheck(L_13);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Adjust_Icon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Icon_Update_m583925A2D74B368D439C9CA331EF227F66745D64 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	{
		// fetchNewPos();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Adjust_Icon_fetchNewPos_m8DA5DE03F2F8AB824EAA6D2C300F5A49065D98D4(__this, NULL);
		// transform.position = desiredPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___desiredPos_4;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// fetchNewRot();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Adjust_Icon_fetchNewRot_mD17AF5D296E27D17E3053EC85B6AF683F1A6747D(__this, NULL);
		// Arrow.transform.rotation = desiredRot;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Arrow_9;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = __this->___desiredRot_5;
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_6, NULL);
		// RescaleArrow();
		Adjust_Icon_RescaleArrow_m2EE4F3E97ACFA25CCA25A04BBE666CBCE178EF24(__this, NULL);
		// }
		return;
	}
}
// System.Void Adjust_Icon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adjust_Icon__ctor_m1442994D647FC69DC786B02F0886500E8E01D848 (Adjust_Icon_t737BAF27DA363E17D5CC7A3C27BF93641B81ED1F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 desiredPos = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___desiredPos_4 = L_0;
		// public Quaternion desiredRot = Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		__this->___desiredRot_5 = L_1;
		// Vector3 startPos = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___startPos_6 = L_2;
		// Quaternion startRot = Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		__this->___startRot_7 = L_3;
		// public float desiredArrowScale = 1;
		__this->___desiredArrowScale_8 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void airSpaceLogic::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void airSpaceLogic_OnCollisionEnter_m89E8CA59A494A53C5AD0776F349D22DFAD4FDE46 (airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Icon")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// startTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___startTime_6 = L_4;
		// deltaTime = 0;
		__this->___deltaTime_8 = (0.0f);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void airSpaceLogic::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void airSpaceLogic_OnCollisionExit_m7E4CADF0EEECF62BD497DF64E846D0ED05E1A8B4 (airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Icon")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// endTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___endTime_7 = L_4;
		// deltaTime = endTime - startTime;
		float L_5 = __this->___endTime_7;
		float L_6 = __this->___startTime_6;
		__this->___deltaTime_8 = ((float)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void airSpaceLogic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void airSpaceLogic_Start_m3852D6ED25426FC8E2CC884D3BECE084B4EE8D55 (airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void airSpaceLogic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void airSpaceLogic_Update_m9A30B67F703198502487A7D09E50020A1975D651 (airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* __this, const RuntimeMethod* method) 
{
	{
		// if (deltaTime > timeThreshold)
		float L_0 = __this->___deltaTime_8;
		float L_1 = __this->___timeThreshold_9;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		// activated = true;
		__this->___activated_4 = (bool)1;
		return;
	}

IL_0016:
	{
		// activated = false;
		__this->___activated_4 = (bool)0;
		// }
		return;
	}
}
// System.Void airSpaceLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void airSpaceLogic__ctor_m1FEBED45B31478CE105C1BB39AE4A976514777D9 (airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* __this, const RuntimeMethod* method) 
{
	{
		// public float startTime = 0, endTime = 0, deltaTime = 0, timeThreshold = 3;
		__this->___timeThreshold_9 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void collisionLogic::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionLogic_OnCollisionEnter_mE6E9B511D5A641091C4302A2089C2AA62439CA7C (collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86B6F0BC726E244919862B6680176EC14F5E968);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* L_2;
		L_2 = Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C(L_1, Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___activated_4;
		V_0 = L_3;
		// float timeInAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* L_6;
		L_6 = Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C(L_5, Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = L_6->___deltaTime_8;
		V_1 = L_7;
		// if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5, NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_009c;
		}
	}

IL_0048:
	{
		// int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 30);
		float L_13 = V_1;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_13, (30.0f))), NULL);
		V_2 = L_14;
		// if (colourIntensity > 255) {
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0063;
		}
	}
	{
		// colourIntensity = 255;
		V_2 = ((int32_t)255);
	}

IL_0063:
	{
		// Debug.Log(colourIntensity);
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// Color padCol = new Color(colourIntensity, 0, 0);
		int32_t L_19 = V_2;
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_3), ((float)L_19), (0.0f), (0.0f), NULL);
		// GetComponent<MeshRenderer>().material.color = padCol;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20;
		L_20 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
		L_21 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_20, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_3;
		NullCheck(L_21);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_21, L_22, NULL);
		// Debug.LogWarning("RED");
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralA86B6F0BC726E244919862B6680176EC14F5E968, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void collisionLogic::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionLogic_OnCollisionStay_m1E5375C0B4F9540C1B783811DC52CCCD98E49341 (collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86B6F0BC726E244919862B6680176EC14F5E968);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* L_2;
		L_2 = Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C(L_1, Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___activated_4;
		V_0 = L_3;
		// float timeInAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* L_6;
		L_6 = Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C(L_5, Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = L_6->___deltaTime_8;
		V_1 = L_7;
		// if (collision.gameObject.name == "ColliderCube" || inAirSpace == true)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5, NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_00a7;
		}
	}

IL_0048:
	{
		// int colourIntensity = Mathf.RoundToInt(timeInAirSpace * 30);
		float L_13 = V_1;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_13, (30.0f))), NULL);
		V_2 = L_14;
		// if (colourIntensity > 255)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0063;
		}
	}
	{
		// colourIntensity = 255;
		V_2 = ((int32_t)255);
	}

IL_0063:
	{
		// Debug.Log(colourIntensity);
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// Color padCol = new Color(colourIntensity, 0, 0);
		int32_t L_19 = V_2;
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_3), ((float)L_19), (0.0f), (0.0f), NULL);
		// GetComponent<MeshRenderer>().material.color = padCol;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20;
		L_20 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
		L_21 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_20, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_3;
		NullCheck(L_21);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_21, L_22, NULL);
		// Debug.LogWarning("RED");
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralA86B6F0BC726E244919862B6680176EC14F5E968, NULL);
		// Debug.LogWarning(colourIntensity);
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_25, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void collisionLogic::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionLogic_OnCollisionExit_mFD93F0F6B3C1487EF346A8EBF344158B0C3258FA (collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5E181B80CBC593BBB805B871708B130AEAB5E6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool inAirSpace = transform.GetChild(0).GetComponent<airSpaceLogic>().activated;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		airSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801* L_2;
		L_2 = Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C(L_1, Component_GetComponent_TisairSpaceLogic_t5E8E2B475C2FBADD5F593040A59DC2AE6A823801_mFDB3582C347DA76308C3B32A2A293FCF20E0E88C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___activated_4;
		V_0 = L_3;
		// if (collision.gameObject.name == "ColliderCube" || inAirSpace == false)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0050;
		}
	}

IL_0031:
	{
		// GetComponent<MeshRenderer>().material.color = Color.white;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9;
		L_9 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_10);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
		// Debug.LogWarning("WHITE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral7D5E181B80CBC593BBB805B871708B130AEAB5E6, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void collisionLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionLogic__ctor_m50E2AF09A7F2F85EE9656A12B5E0800A3F63F727 (collisionLogic_t142DB2B56CFB28E7D036DB062A799A2B6C8F0843* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion detectLandingPad::landingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 detectLandingPad_landingLocation_m9733AEA74C75498C7886FBCA240135C18A445961 (detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E2201A69531C8EA04A5DD5D701F16C4B41AE8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4865B45661333E66776B7F38F28C98095CE99A97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E68ECF684BFE9965AD7C867BCC879CF6E1ED8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9E26753E12DFA082CEF6D2CF096982CB98A4497);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float[] xArr = Icon.GetComponent<ServerTwo>().posAx;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Icon_4;
		NullCheck(L_0);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_1;
		L_1 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_0, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1->___posAx_20;
		V_0 = L_2;
		// float[] yArr = Icon.GetComponent<ServerTwo>().posAy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Icon_4;
		NullCheck(L_3);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_4;
		L_4 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_3, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4->___posAy_21;
		V_1 = L_5;
		// float[] zArr = Icon.GetComponent<ServerTwo>().posAz;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Icon_4;
		NullCheck(L_6);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_7;
		L_7 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_6, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7->___posAz_22;
		V_2 = L_8;
		// float mag = Icon.GetComponent<ServerTwo>().receivedMag;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Icon_4;
		NullCheck(L_9);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_10;
		L_10 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_9, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_10);
		float L_11 = L_10->___receivedMag_16;
		// float xDiff = xArr[2] - xArr[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_17));
		// float yDiff = yArr[2] - yArr[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 2;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = ((float)il2cpp_codegen_subtract(L_20, L_23));
		// float zDiff = zArr[2] - zArr[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = 2;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_5 = ((float)il2cpp_codegen_subtract(L_26, L_29));
		// Vector3 targetDir = new Vector3(xDiff, yDiff, zDiff);
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_30, L_31, L_32, /*hidden argument*/NULL);
		// float magnitude = Mathf.Sqrt(Mathf.Pow(xDiff, 2) + Mathf.Pow(yDiff, 2) + Mathf.Pow(zDiff, 2));
		float L_34 = V_3;
		float L_35;
		L_35 = powf(L_34, (2.0f));
		float L_36 = V_4;
		float L_37;
		L_37 = powf(L_36, (2.0f));
		float L_38 = V_5;
		float L_39;
		L_39 = powf(L_38, (2.0f));
		float L_40;
		L_40 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_35, L_37)), L_39)));
		// Debug.LogWarning("Magnitude");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralB9E26753E12DFA082CEF6D2CF096982CB98A4497, NULL);
		// Debug.LogWarning(magnitude);
		float L_41 = L_40;
		RuntimeObject* L_42 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_41);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_42, NULL);
		// Debug.LogWarning("angx");
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral4865B45661333E66776B7F38F28C98095CE99A97, NULL);
		// float angX = Vector3.Angle(targetDir, transform.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_44, NULL);
		float L_46;
		L_46 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_43, L_45, NULL);
		V_6 = L_46;
		// Debug.LogWarning(angX);
		float L_47 = V_6;
		float L_48 = L_47;
		RuntimeObject* L_49 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_48);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_49, NULL);
		// Debug.LogWarning("angy");
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral71E68ECF684BFE9965AD7C867BCC879CF6E1ED8F, NULL);
		// float angY = Vector3.Angle(targetDir, transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_50, NULL);
		float L_52;
		L_52 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_43, L_51, NULL);
		V_7 = L_52;
		// Debug.LogWarning(angY);
		float L_53 = V_7;
		float L_54 = L_53;
		RuntimeObject* L_55 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_54);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_55, NULL);
		// Debug.LogWarning("angz");
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3E2201A69531C8EA04A5DD5D701F16C4B41AE8C0, NULL);
		// return stickAngle = Quaternion.Euler(angX, angY, 0);
		float L_56 = V_6;
		float L_57 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_56, L_57, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59 = L_58;
		V_8 = L_59;
		__this->___stickAngle_6 = L_59;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = V_8;
		return L_60;
	}
}
// System.Void detectLandingPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void detectLandingPad_Start_mF422A094B70C8731F70178E43893AB2DAAA29368 (detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Find("ColliderCube").GetComponent<MeshRenderer>().enabled = showCollider;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral3846E0A17F6EB70B4366F26AAE87709D015B55E5, NULL);
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_1, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		bool L_3 = __this->___showCollider_9;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void detectLandingPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void detectLandingPad_Update_mA50AD194A40614897477633EAB351EC86B0B957D (detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// mag = Icon.GetComponent<ServerTwo>().receivedMag;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Icon_4;
		NullCheck(L_0);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_1;
		L_1 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_0, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2 = L_1->___receivedMag_16;
		__this->___mag_7 = L_2;
		// float[] xArr = Icon.GetComponent<ServerTwo>().posAx;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Icon_4;
		NullCheck(L_3);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_4;
		L_4 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_3, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4->___posAx_20;
		// float[] yArr = Icon.GetComponent<ServerTwo>().posAy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Icon_4;
		NullCheck(L_6);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_7;
		L_7 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_6, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7->___posAy_21;
		// float[] zArr = Icon.GetComponent<ServerTwo>().posAz;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Icon_4;
		NullCheck(L_9);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_10;
		L_10 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_9, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_10->___posAz_22;
		// float lastX = Icon.GetComponent<ServerTwo>().lastPosX;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Icon_4;
		NullCheck(L_12);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_13;
		L_13 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_12, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_13);
		float L_14 = L_13->___lastPosX_23;
		V_0 = L_14;
		// float lastY = Icon.GetComponent<ServerTwo>().lastPosY;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Icon_4;
		NullCheck(L_15);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_16;
		L_16 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_15, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17 = L_16->___lastPosY_24;
		V_1 = L_17;
		// float lastZ = Icon.GetComponent<ServerTwo>().lastPosZ;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___Icon_4;
		NullCheck(L_18);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_19;
		L_19 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_18, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_19);
		float L_20 = L_19->___lastPosZ_25;
		V_2 = L_20;
		// float currentX = Icon.GetComponent<ServerTwo>().cPosX;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___Icon_4;
		NullCheck(L_21);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_22;
		L_22 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_21, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_22);
		float L_23 = L_22->___cPosX_26;
		V_3 = L_23;
		// float currentY = Icon.GetComponent<ServerTwo>().cPosY; // * mag / 0.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___Icon_4;
		NullCheck(L_24);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_25;
		L_25 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_24, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_25);
		float L_26 = L_25->___cPosY_27;
		V_4 = L_26;
		// float currentZ = Icon.GetComponent<ServerTwo>().cPosZ; // * mag/0.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___Icon_4;
		NullCheck(L_27);
		ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* L_28;
		L_28 = GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4(L_27, GameObject_GetComponent_TisServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_m947F3B6E216BAE71CCDE062AF74A7797F2DCE8C4_RuntimeMethod_var);
		NullCheck(L_28);
		float L_29 = L_28->___cPosZ_28;
		V_5 = L_29;
		// current = new Vector3(currentX, currentY, currentZ);
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_30, L_31, L_32, /*hidden argument*/NULL);
		__this->___current_8 = L_33;
		// Vector3 startPt = new Vector3(lastX, lastY, lastZ);
		float L_34 = V_0;
		float L_35 = V_1;
		float L_36 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_34, L_35, L_36, NULL);
		// Vector3 destPt = new Vector3(currentX, currentY, currentZ);
		float L_37 = V_3;
		float L_38 = V_4;
		float L_39 = V_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_37, L_38, L_39, NULL);
		// transform.position = startPt;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_6;
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_41, NULL);
		// transform.LookAt(destPt);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_7;
		NullCheck(L_42);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_42, L_43, NULL);
		// }
		return;
	}
}
// System.Void detectLandingPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void detectLandingPad__ctor_mD5646BDAD6B14BECDA1C18EF42D03894F248280B (detectLandingPad_t4D2992C4A895BAB58D250F9F9128431B8A245076* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion stickAngle = Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		__this->___stickAngle_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ServerTwo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_Start_m65706B99D6B05BCC2B7EAD309FFC385845E531A6 (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	{
		// Application.runInBackground = true;
		Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
		// startServer();
		ServerTwo_startServer_m169D53538F641A9F21E8465D0F76AA4B3070B60A(__this, NULL);
		// }
		return;
	}
}
// System.Void ServerTwo::startServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_startServer_m169D53538F641A9F21E8465D0F76AA4B3070B60A (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerTwo_networkCode_m1B6303CAB21CACE58EED2A527841008331D6F555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SocketThread = new System.Threading.Thread(networkCode);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_0 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_0, __this, (intptr_t)((void*)ServerTwo_networkCode_m1B6303CAB21CACE58EED2A527841008331D6F555_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_1, L_0, NULL);
		__this->___SocketThread_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SocketThread_4), (void*)L_1);
		// SocketThread.IsBackground = true;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->___SocketThread_4;
		NullCheck(L_2);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_2, (bool)1, NULL);
		// SocketThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = __this->___SocketThread_4;
		NullCheck(L_3);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_3, NULL);
		// }
		return;
	}
}
// System.String ServerTwo::getIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerTwo_getIPAddress_m9C41E7DDA27702E3D7F01056CA8C0012AF6A657E (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_1 = NULL;
	int32_t V_2 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_3 = NULL;
	{
		// string setlocalIP = "160.69.69.125";
		V_0 = _stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E;
		// host = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_mF728787FF8A38620054B934FD08E021460A7C14D(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02(L_0, NULL);
		// foreach (IPAddress ip in host.AddressList)
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		// foreach (IPAddress ip in host.AddressList)
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (ip.AddressFamily == AddressFamily.InterNetwork)
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0032;
		}
	}
	{
		// localIP = ip.ToString();
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		il2cpp_codegen_runtime_class_init_inline(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___localIP_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___localIP_6), (void*)L_10);
	}

IL_0032:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		// foreach (IPAddress ip in host.AddressList)
		int32_t L_12 = V_2;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return setlocalIP;
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void ServerTwo::networkCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_networkCode_m1B6303CAB21CACE58EED2A527841008331D6F555 (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C09B7AF657448F2C999E8D9FFA1C8D5BFEBED4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CAF420A31B11C3ADE603CE67220A90A799A4696);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168D3013244BA5E126C6436113AB47EDAFCDF442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA73518D20ECAB2A83D3253EF7CF445A3E14CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E6888463A184465AA1379F75B191142A7270E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B1FA2D89DC4B9961BF40637CD96D5104911972F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B9938338740566720F8296DC2F98DDC1CBD913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B68D9BE17D97C23E418C203DE7BFAF82C164979);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC73C0E9AAD53946C0BB0FD5CBEC635D010DD8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC835C4485111B4C6FD3DA5893DAB5522B5B53E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_2 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// byte[] bytes = new Byte[1024];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_1 = L_0;
		// IPAddress[] ipArray = Dns.GetHostAddresses(getIPAddress());
		String_t* L_1;
		L_1 = ServerTwo_getIPAddress_m9C41E7DDA27702E3D7F01056CA8C0012AF6A657E(__this, NULL);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = Dns_GetHostAddresses_m0592CB7DB3F5665C412BCBE8297F198748114F90(L_1, NULL);
		V_2 = L_2;
		// IPEndPoint localEndPoint = new IPEndPoint(setIpAddress, port); // SET IP
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = __this->___setIpAddress_7;
		int32_t L_4 = __this->___port_8;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_5 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_5, L_3, L_4, NULL);
		V_3 = L_5;
		// listener = new Socket(ipArray[0].AddressFamily,
		//     SocketType.Stream, ProtocolType.Tcp);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9;
		L_9 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_8, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_10, L_9, 1, 6, NULL);
		__this->___listener_29 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_29), (void*)L_10);
	}
	try
	{// begin try (depth: 1)
		{
			// listener.Bind(localEndPoint);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_11 = __this->___listener_29;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_12 = V_3;
			NullCheck(L_11);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_11, L_12, NULL);
			// listener.Listen(10);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_13 = __this->___listener_29;
			NullCheck(L_13);
			Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC(L_13, ((int32_t)10), NULL);
		}

IL_0057_1:
		{
			// keepReading = true;
			il2cpp_codegen_memory_barrier();
			__this->___keepReading_5 = (bool)1;
			// Debug.Log("Waiting for Connection");     //It works
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAC835C4485111B4C6FD3DA5893DAB5522B5B53E1, NULL);
			// handler = listener.Accept();
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = __this->___listener_29;
			NullCheck(L_14);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15;
			L_15 = Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A(L_14, NULL);
			__this->___handler_30 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_30), (void*)L_15);
			// Debug.Log("Client Connected");     //It doesn't work
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAC73C0E9AAD53946C0BB0FD5CBEC635D010DD8C9, NULL);
			// data = null;
			V_0 = (String_t*)NULL;
			goto IL_035f_1;
		}

IL_008c_1:
		{
			// bytes = new byte[1024];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
			V_1 = L_16;
			// int bytesRec = handler.Receive(bytes);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = __this->___handler_30;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
			NullCheck(L_17);
			int32_t L_19;
			L_19 = Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C(L_17, L_18, NULL);
			V_4 = L_19;
			// Debug.Log("Received by Server");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7B1FA2D89DC4B9961BF40637CD96D5104911972F, NULL);
			// if (bytesRec <= 0)
			int32_t L_20 = V_4;
			if ((((int32_t)L_20) > ((int32_t)0)))
			{
				goto IL_00ce_1;
			}
		}
		{
			// keepReading = false;
			il2cpp_codegen_memory_barrier();
			__this->___keepReading_5 = (bool)0;
			// handler.Disconnect(true);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_21 = __this->___handler_30;
			NullCheck(L_21);
			Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422(L_21, (bool)1, NULL);
			// break;
			goto IL_036c_1;
		}

IL_00ce_1:
		{
			// data += Encoding.ASCII.GetString(bytes, 0, bytesRec);
			String_t* L_22 = V_0;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
			L_23 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
			int32_t L_25 = V_4;
			NullCheck(L_23);
			String_t* L_26;
			L_26 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(44 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, L_25);
			String_t* L_27;
			L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_22, L_26, NULL);
			V_0 = L_27;
			// if (data.IndexOf("<EOF>") > -1)
			String_t* L_28 = V_0;
			NullCheck(L_28);
			int32_t L_29;
			L_29 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_28, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
			if ((((int32_t)L_29) <= ((int32_t)(-1))))
			{
				goto IL_0359_1;
			}
		}
		{
			// string removeString = "<EOF>";
			V_5 = _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
			// data = data.Replace(removeString, "");
			String_t* L_30 = V_0;
			String_t* L_31 = V_5;
			NullCheck(L_30);
			String_t* L_32;
			L_32 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_30, L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_32;
			// if (data.Contains("xP"))
			String_t* L_33 = V_0;
			NullCheck(L_33);
			bool L_34;
			L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, _stringLiteral9B68D9BE17D97C23E418C203DE7BFAF82C164979, NULL);
			if (!L_34)
			{
				goto IL_0189_1;
			}
		}
		{
			// removeString = "xP";
			V_5 = _stringLiteral9B68D9BE17D97C23E418C203DE7BFAF82C164979;
			// data = data.Replace(removeString, "");
			String_t* L_35 = V_0;
			String_t* L_36 = V_5;
			NullCheck(L_35);
			String_t* L_37;
			L_37 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_35, L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_37;
			// receivedZ = float.Parse(data);
			String_t* L_38 = V_0;
			float L_39;
			L_39 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_38, NULL);
			__this->___receivedZ_12 = L_39;
			// posAz[iZ] = receivedZ;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = __this->___posAz_22;
			int32_t L_41 = __this->___iZ_19;
			float L_42 = __this->___receivedZ_12;
			NullCheck(L_40);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (float)L_42);
			// iZ++;
			int32_t L_43 = __this->___iZ_19;
			__this->___iZ_19 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			// if (iZ == velocityGenBracket)
			int32_t L_44 = __this->___iZ_19;
			il2cpp_codegen_runtime_class_init_inline(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
			int32_t L_45 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
			if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
			{
				goto IL_0204_1;
			}
		}
		{
			// iZ = 0;
			__this->___iZ_19 = 0;
			// lastPosZ = cPosZ;
			float L_46 = __this->___cPosZ_28;
			__this->___lastPosZ_25 = L_46;
			// cPosZ = receivedZ;
			float L_47 = __this->___receivedZ_12;
			__this->___cPosZ_28 = L_47;
			goto IL_0204_1;
		}

IL_0189_1:
		{
			// else if (data.Contains("yP"))
			String_t* L_48 = V_0;
			NullCheck(L_48);
			bool L_49;
			L_49 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_48, _stringLiteral0CAF420A31B11C3ADE603CE67220A90A799A4696, NULL);
			if (!L_49)
			{
				goto IL_0204_1;
			}
		}
		{
			// removeString = "yP";
			V_5 = _stringLiteral0CAF420A31B11C3ADE603CE67220A90A799A4696;
			// data = data.Replace(removeString, "");
			String_t* L_50 = V_0;
			String_t* L_51 = V_5;
			NullCheck(L_50);
			String_t* L_52;
			L_52 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_50, L_51, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_52;
			// receivedX = float.Parse(data);
			String_t* L_53 = V_0;
			float L_54;
			L_54 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_53, NULL);
			__this->___receivedX_10 = L_54;
			// posAx[iX] = receivedX;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___posAx_20;
			int32_t L_56 = __this->___iX_17;
			float L_57 = __this->___receivedX_10;
			NullCheck(L_55);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (float)L_57);
			// iX++;
			int32_t L_58 = __this->___iX_17;
			__this->___iX_17 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			// if (iX == velocityGenBracket)
			int32_t L_59 = __this->___iX_17;
			il2cpp_codegen_runtime_class_init_inline(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
			int32_t L_60 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
			if ((!(((uint32_t)L_59) == ((uint32_t)L_60))))
			{
				goto IL_0204_1;
			}
		}
		{
			// iX = 0;
			__this->___iX_17 = 0;
			// lastPosX = cPosX;
			float L_61 = __this->___cPosX_26;
			__this->___lastPosX_23 = L_61;
			// cPosX = receivedX;
			float L_62 = __this->___receivedX_10;
			__this->___cPosX_26 = L_62;
		}

IL_0204_1:
		{
			// if (data.Contains("zP"))
			String_t* L_63 = V_0;
			NullCheck(L_63);
			bool L_64;
			L_64 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_63, _stringLiteral5DA73518D20ECAB2A83D3253EF7CF445A3E14CB7, NULL);
			if (!L_64)
			{
				goto IL_0285_1;
			}
		}
		{
			// removeString = "zP";
			V_5 = _stringLiteral5DA73518D20ECAB2A83D3253EF7CF445A3E14CB7;
			// data = data.Replace(removeString, "");
			String_t* L_65 = V_0;
			String_t* L_66 = V_5;
			NullCheck(L_65);
			String_t* L_67;
			L_67 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_65, L_66, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_67;
			// receivedY = -1 * float.Parse(data);
			String_t* L_68 = V_0;
			float L_69;
			L_69 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_68, NULL);
			__this->___receivedY_11 = ((float)il2cpp_codegen_multiply((-1.0f), L_69));
			// posAy[iY] = receivedY;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = __this->___posAy_21;
			int32_t L_71 = __this->___iY_18;
			float L_72 = __this->___receivedY_11;
			NullCheck(L_70);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (float)L_72);
			// iY++;
			int32_t L_73 = __this->___iY_18;
			__this->___iY_18 = ((int32_t)il2cpp_codegen_add(L_73, 1));
			// if (iY == velocityGenBracket)
			int32_t L_74 = __this->___iY_18;
			il2cpp_codegen_runtime_class_init_inline(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
			int32_t L_75 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
			if ((!(((uint32_t)L_74) == ((uint32_t)L_75))))
			{
				goto IL_0285_1;
			}
		}
		{
			// iY = 0;
			__this->___iY_18 = 0;
			// lastPosY = cPosY;
			float L_76 = __this->___cPosY_27;
			__this->___lastPosY_24 = L_76;
			// cPosY = receivedY;
			float L_77 = __this->___receivedY_11;
			__this->___cPosY_27 = L_77;
		}

IL_0285_1:
		{
			// if (data.Contains("aX"))
			String_t* L_78 = V_0;
			NullCheck(L_78);
			bool L_79;
			L_79 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_78, _stringLiteral6E6888463A184465AA1379F75B191142A7270E82, NULL);
			if (!L_79)
			{
				goto IL_02b3_1;
			}
		}
		{
			// removeString = "aX";
			V_5 = _stringLiteral6E6888463A184465AA1379F75B191142A7270E82;
			// data = data.Replace(removeString, "");
			String_t* L_80 = V_0;
			String_t* L_81 = V_5;
			NullCheck(L_80);
			String_t* L_82;
			L_82 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_80, L_81, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_82;
			// receivedAX = float.Parse(data);
			String_t* L_83 = V_0;
			float L_84;
			L_84 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_83, NULL);
			__this->___receivedAX_13 = L_84;
		}

IL_02b3_1:
		{
			// if (data.Contains("aY"))
			String_t* L_85 = V_0;
			NullCheck(L_85);
			bool L_86;
			L_86 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_85, _stringLiteral0C09B7AF657448F2C999E8D9FFA1C8D5BFEBED4D, NULL);
			if (!L_86)
			{
				goto IL_02e1_1;
			}
		}
		{
			// removeString = "aY";
			V_5 = _stringLiteral0C09B7AF657448F2C999E8D9FFA1C8D5BFEBED4D;
			// data = data.Replace(removeString, "");
			String_t* L_87 = V_0;
			String_t* L_88 = V_5;
			NullCheck(L_87);
			String_t* L_89;
			L_89 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_87, L_88, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_89;
			// receivedAY = float.Parse(data);
			String_t* L_90 = V_0;
			float L_91;
			L_91 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_90, NULL);
			__this->___receivedAY_14 = L_91;
		}

IL_02e1_1:
		{
			// if (data.Contains("aZ"))
			String_t* L_92 = V_0;
			NullCheck(L_92);
			bool L_93;
			L_93 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_92, _stringLiteral168D3013244BA5E126C6436113AB47EDAFCDF442, NULL);
			if (!L_93)
			{
				goto IL_030f_1;
			}
		}
		{
			// removeString = "aZ";
			V_5 = _stringLiteral168D3013244BA5E126C6436113AB47EDAFCDF442;
			// data = data.Replace(removeString, "");
			String_t* L_94 = V_0;
			String_t* L_95 = V_5;
			NullCheck(L_94);
			String_t* L_96;
			L_96 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_94, L_95, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_96;
			// receivedAZ = float.Parse(data);
			String_t* L_97 = V_0;
			float L_98;
			L_98 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_97, NULL);
			__this->___receivedAZ_15 = L_98;
		}

IL_030f_1:
		{
			// if (data.Contains("M"))
			String_t* L_99 = V_0;
			NullCheck(L_99);
			bool L_100;
			L_100 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_99, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, NULL);
			if (!L_100)
			{
				goto IL_036c_1;
			}
		}
		{
			// removeString = "M";
			V_5 = _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
			// data = data.Replace(removeString, "");
			String_t* L_101 = V_0;
			String_t* L_102 = V_5;
			NullCheck(L_101);
			String_t* L_103;
			L_103 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_101, L_102, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_0 = L_103;
			// receivedMag = float.Parse(data);
			String_t* L_104 = V_0;
			float L_105;
			L_105 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_104, NULL);
			__this->___receivedMag_16 = L_105;
			// Debug.Log("Received Magnitude is ");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral83B9938338740566720F8296DC2F98DDC1CBD913, NULL);
			// Debug.Log(receivedMag);
			float L_106 = __this->___receivedMag_16;
			float L_107 = L_106;
			RuntimeObject* L_108 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_107);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_108, NULL);
			// break;
			goto IL_036c_1;
		}

IL_0359_1:
		{
			// System.Threading.Thread.Sleep(1);
			Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(1, NULL);
		}

IL_035f_1:
		{
			// while (keepReading)
			bool L_109 = __this->___keepReading_5;
			il2cpp_codegen_memory_barrier();
			if (L_109)
			{
				goto IL_008c_1;
			}
		}

IL_036c_1:
		{
			// System.Threading.Thread.Sleep(1);
			Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(1, NULL);
			// while (true)
			goto IL_0057_1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0377;
		}
		throw e;
	}

CATCH_0377:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_110;
		L_110 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_110, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0383;
	}// end catch (depth: 1)

IL_0383:
	{
		// }
		return;
	}
}
// System.Void ServerTwo::stopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_stopServer_m5867921C9FCBEF7ADBB2D4BA34D2EC49FBFED8F5 (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B55ADE103E40A14E2C3D11CC6D8125B34A8178);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keepReading = false;
		il2cpp_codegen_memory_barrier();
		__this->___keepReading_5 = (bool)0;
		// if (SocketThread != null)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___SocketThread_4;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// SocketThread.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = __this->___SocketThread_4;
		NullCheck(L_1);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(L_1, NULL);
	}

IL_001c:
	{
		// if (handler != null && handler.Connected)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = __this->___handler_30;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = __this->___handler_30;
		NullCheck(L_3);
		bool L_4;
		L_4 = Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// handler.Disconnect(false);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = __this->___handler_30;
		NullCheck(L_5);
		Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422(L_5, (bool)0, NULL);
		// Debug.Log("Disconnected!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE8B55ADE103E40A14E2C3D11CC6D8125B34A8178, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void ServerTwo::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo_OnDisable_m24985C7AF3C32DD81A1DECC315E13BC0E30C111C (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	{
		// stopServer();
		ServerTwo_stopServer_m5867921C9FCBEF7ADBB2D4BA34D2EC49FBFED8F5(__this, NULL);
		// }
		return;
	}
}
// System.Void ServerTwo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo__ctor_m373F7FF57F150B3D6A28D6CCA0B283F6DA671ED3 (ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IPAddress setIpAddress = IPAddress.Parse(localIP);
		il2cpp_codegen_runtime_class_init_inline(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___localIP_6;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C(L_0, NULL);
		__this->___setIpAddress_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setIpAddress_7), (void*)L_1);
		// public int port = 5007;
		__this->___port_8 = ((int32_t)5007);
		// public float[] posAx = new float[velocityGenBracket], posAy= new float[velocityGenBracket], posAz = new float[velocityGenBracket];
		int32_t L_2 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___posAx_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___posAx_20), (void*)L_3);
		// public float[] posAx = new float[velocityGenBracket], posAy= new float[velocityGenBracket], posAz = new float[velocityGenBracket];
		int32_t L_4 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___posAy_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___posAy_21), (void*)L_5);
		// public float[] posAx = new float[velocityGenBracket], posAy= new float[velocityGenBracket], posAz = new float[velocityGenBracket];
		int32_t L_6 = ((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___posAz_22 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___posAz_22), (void*)L_7);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ServerTwo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerTwo__cctor_m0EF903616B6B0A4383C2C25E123169EDC833E0F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string localIP = "160.69.69.125"; // 147 USE WHEN USING WITH HOLOLENS CONENCTED TO CARIS NETWORK
		((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___localIP_6 = _stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E;
		Il2CppCodeGenWriteBarrier((void**)(&((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___localIP_6), (void*)_stringLiteral831E83D6A1D1E12822A7A5DE3848D7B206E4623E);
		// private static int velocityGenBracket = 3;
		((ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_StaticFields*)il2cpp_codegen_static_fields_for(ServerTwo_tA333419B8DFF097E5DC6F1DBF3890B60ED10FF32_il2cpp_TypeInfo_var))->___velocityGenBracket_9 = 3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
