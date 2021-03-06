// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DB_Base.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace PDBBase {

  /// <summary>Holder for reflection information generated from DB_Base.proto</summary>
  public static partial class DBBaseReflection {

    #region Descriptor
    /// <summary>File descriptor for DB_Base.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static DBBaseReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cg1EQl9CYXNlLnByb3RvEghQREJfQmFzZSKJAQoJREJBY2NvdW50Eg0KBXVs",
            "dWlkGAEgASgEEgwKBHNhY2MYAiABKAkSDAoEc3B3ZBgDIAEoCRIMCgRzdGVs",
            "GAQgASgJEgsKA3N3eBgFIAEoCRILCgNzcXEYBiABKAkSEwoLdWxsYXN0bG9n",
            "aW4YByABKAQSFAoMdWxjcmVhdGV0aW1lGAggASgEIi4KCkRCVXNlckluZm8S",
            "DQoFdWx1aWQYASABKAQSEQoJc25pY2tuYW1lGAIgASgJYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::PDBBase.DBAccount), global::PDBBase.DBAccount.Parser, new[]{ "Uluid", "Sacc", "Spwd", "Stel", "Swx", "Sqq", "Ullastlogin", "Ulcreatetime" }, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::PDBBase.DBUserInfo), global::PDBBase.DBUserInfo.Parser, new[]{ "Uluid", "Snickname" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class DBAccount : pb::IMessage<DBAccount> {
    private static readonly pb::MessageParser<DBAccount> _parser = new pb::MessageParser<DBAccount>(() => new DBAccount());
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<DBAccount> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::PDBBase.DBBaseReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBAccount() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBAccount(DBAccount other) : this() {
      uluid_ = other.uluid_;
      sacc_ = other.sacc_;
      spwd_ = other.spwd_;
      stel_ = other.stel_;
      swx_ = other.swx_;
      sqq_ = other.sqq_;
      ullastlogin_ = other.ullastlogin_;
      ulcreatetime_ = other.ulcreatetime_;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBAccount Clone() {
      return new DBAccount(this);
    }

    /// <summary>Field number for the "uluid" field.</summary>
    public const int UluidFieldNumber = 1;
    private ulong uluid_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ulong Uluid {
      get { return uluid_; }
      set {
        uluid_ = value;
      }
    }

    /// <summary>Field number for the "sacc" field.</summary>
    public const int SaccFieldNumber = 2;
    private string sacc_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Sacc {
      get { return sacc_; }
      set {
        sacc_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "spwd" field.</summary>
    public const int SpwdFieldNumber = 3;
    private string spwd_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Spwd {
      get { return spwd_; }
      set {
        spwd_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "stel" field.</summary>
    public const int StelFieldNumber = 4;
    private string stel_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Stel {
      get { return stel_; }
      set {
        stel_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "swx" field.</summary>
    public const int SwxFieldNumber = 5;
    private string swx_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Swx {
      get { return swx_; }
      set {
        swx_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "sqq" field.</summary>
    public const int SqqFieldNumber = 6;
    private string sqq_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Sqq {
      get { return sqq_; }
      set {
        sqq_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "ullastlogin" field.</summary>
    public const int UllastloginFieldNumber = 7;
    private ulong ullastlogin_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ulong Ullastlogin {
      get { return ullastlogin_; }
      set {
        ullastlogin_ = value;
      }
    }

    /// <summary>Field number for the "ulcreatetime" field.</summary>
    public const int UlcreatetimeFieldNumber = 8;
    private ulong ulcreatetime_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ulong Ulcreatetime {
      get { return ulcreatetime_; }
      set {
        ulcreatetime_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as DBAccount);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(DBAccount other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Uluid != other.Uluid) return false;
      if (Sacc != other.Sacc) return false;
      if (Spwd != other.Spwd) return false;
      if (Stel != other.Stel) return false;
      if (Swx != other.Swx) return false;
      if (Sqq != other.Sqq) return false;
      if (Ullastlogin != other.Ullastlogin) return false;
      if (Ulcreatetime != other.Ulcreatetime) return false;
      return true;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Uluid != 0UL) hash ^= Uluid.GetHashCode();
      if (Sacc.Length != 0) hash ^= Sacc.GetHashCode();
      if (Spwd.Length != 0) hash ^= Spwd.GetHashCode();
      if (Stel.Length != 0) hash ^= Stel.GetHashCode();
      if (Swx.Length != 0) hash ^= Swx.GetHashCode();
      if (Sqq.Length != 0) hash ^= Sqq.GetHashCode();
      if (Ullastlogin != 0UL) hash ^= Ullastlogin.GetHashCode();
      if (Ulcreatetime != 0UL) hash ^= Ulcreatetime.GetHashCode();
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (Uluid != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(Uluid);
      }
      if (Sacc.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Sacc);
      }
      if (Spwd.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Spwd);
      }
      if (Stel.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Stel);
      }
      if (Swx.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(Swx);
      }
      if (Sqq.Length != 0) {
        output.WriteRawTag(50);
        output.WriteString(Sqq);
      }
      if (Ullastlogin != 0UL) {
        output.WriteRawTag(56);
        output.WriteUInt64(Ullastlogin);
      }
      if (Ulcreatetime != 0UL) {
        output.WriteRawTag(64);
        output.WriteUInt64(Ulcreatetime);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Uluid != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Uluid);
      }
      if (Sacc.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Sacc);
      }
      if (Spwd.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Spwd);
      }
      if (Stel.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Stel);
      }
      if (Swx.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Swx);
      }
      if (Sqq.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Sqq);
      }
      if (Ullastlogin != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Ullastlogin);
      }
      if (Ulcreatetime != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Ulcreatetime);
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(DBAccount other) {
      if (other == null) {
        return;
      }
      if (other.Uluid != 0UL) {
        Uluid = other.Uluid;
      }
      if (other.Sacc.Length != 0) {
        Sacc = other.Sacc;
      }
      if (other.Spwd.Length != 0) {
        Spwd = other.Spwd;
      }
      if (other.Stel.Length != 0) {
        Stel = other.Stel;
      }
      if (other.Swx.Length != 0) {
        Swx = other.Swx;
      }
      if (other.Sqq.Length != 0) {
        Sqq = other.Sqq;
      }
      if (other.Ullastlogin != 0UL) {
        Ullastlogin = other.Ullastlogin;
      }
      if (other.Ulcreatetime != 0UL) {
        Ulcreatetime = other.Ulcreatetime;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 8: {
            Uluid = input.ReadUInt64();
            break;
          }
          case 18: {
            Sacc = input.ReadString();
            break;
          }
          case 26: {
            Spwd = input.ReadString();
            break;
          }
          case 34: {
            Stel = input.ReadString();
            break;
          }
          case 42: {
            Swx = input.ReadString();
            break;
          }
          case 50: {
            Sqq = input.ReadString();
            break;
          }
          case 56: {
            Ullastlogin = input.ReadUInt64();
            break;
          }
          case 64: {
            Ulcreatetime = input.ReadUInt64();
            break;
          }
        }
      }
    }

  }

  public sealed partial class DBUserInfo : pb::IMessage<DBUserInfo> {
    private static readonly pb::MessageParser<DBUserInfo> _parser = new pb::MessageParser<DBUserInfo>(() => new DBUserInfo());
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<DBUserInfo> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::PDBBase.DBBaseReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBUserInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBUserInfo(DBUserInfo other) : this() {
      uluid_ = other.uluid_;
      snickname_ = other.snickname_;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public DBUserInfo Clone() {
      return new DBUserInfo(this);
    }

    /// <summary>Field number for the "uluid" field.</summary>
    public const int UluidFieldNumber = 1;
    private ulong uluid_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ulong Uluid {
      get { return uluid_; }
      set {
        uluid_ = value;
      }
    }

    /// <summary>Field number for the "snickname" field.</summary>
    public const int SnicknameFieldNumber = 2;
    private string snickname_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Snickname {
      get { return snickname_; }
      set {
        snickname_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as DBUserInfo);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(DBUserInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Uluid != other.Uluid) return false;
      if (Snickname != other.Snickname) return false;
      return true;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Uluid != 0UL) hash ^= Uluid.GetHashCode();
      if (Snickname.Length != 0) hash ^= Snickname.GetHashCode();
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (Uluid != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(Uluid);
      }
      if (Snickname.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Snickname);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Uluid != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Uluid);
      }
      if (Snickname.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Snickname);
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(DBUserInfo other) {
      if (other == null) {
        return;
      }
      if (other.Uluid != 0UL) {
        Uluid = other.Uluid;
      }
      if (other.Snickname.Length != 0) {
        Snickname = other.Snickname;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 8: {
            Uluid = input.ReadUInt64();
            break;
          }
          case 18: {
            Snickname = input.ReadString();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
