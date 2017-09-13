// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login_Logic.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace PLoginLogic {

  /// <summary>Holder for reflection information generated from Login_Logic.proto</summary>
  public static partial class LoginLogicReflection {

    #region Descriptor
    /// <summary>File descriptor for Login_Logic.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static LoginLogicReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChFMb2dpbl9Mb2dpYy5wcm90bxIMUExvZ2luX0xvZ2ljGhFDb21tb25fQmFz",
            "ZS5wcm90bxoNREJfQmFzZS5wcm90byIKCghQb2ludF9GYmIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::PCommonBase.CommonBaseReflection.Descriptor, global::PDBBase.DBBaseReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::PLoginLogic.Point_Fb), global::PLoginLogic.Point_Fb.Parser, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///
  ///协议规则前两个字母代表消息流向
  ///D:数据服务器
  ///M：管理服务器
  ///L：登录服务器
  ///G：逻辑服务器
  ///C：客户端
  ///后面更协议的名字
  ///命令枚举以服务器前客户端后的命名_CMD,一对协议对应一个消息id，推送协议占一个消息id
  /// </summary>
  public sealed partial class Point_Fb : pb::IMessage<Point_Fb> {
    private static readonly pb::MessageParser<Point_Fb> _parser = new pb::MessageParser<Point_Fb>(() => new Point_Fb());
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Point_Fb> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::PLoginLogic.LoginLogicReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Point_Fb() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Point_Fb(Point_Fb other) : this() {
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Point_Fb Clone() {
      return new Point_Fb(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Point_Fb);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Point_Fb other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      return true;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Point_Fb other) {
      if (other == null) {
        return;
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
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code