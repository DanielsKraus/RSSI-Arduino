class Commmand
{
  private:
    String prof;
    String role;
    String pass;
    String addr;
    String scan;
    String type;
    
  public:
    
    Command();
    Command(String,String,String,String,String,String);
    
    void setSpp_profile(String);
    void setRole(String);
    void setPswd(String);
    void setAddress(String);
    void setSeek(String);
    void setRecent(String);

    String getSpp_profile();
    String getRole();
    String getPswd();
    String getAddress();
    String getSeek();
    String getRecent();
       
};
Command::Command()
{
    prof = "";
    role = "";
    pass = "";
    addr = "";
    scan = "";
    
}
Command::Command()
{
    prof = profile;
    role = roles;
    pass = password;
    addr = address;
    scan = listens;
    
}
void Command::setSpp_profile(String profile)
{
  prof = profile;
}
void Command::setRole(String roles)
{
  role = roles;
}
void Command::setPswd(String password)
{
  pass = password;
}
void Command::setAddress(String address)
{
  addr = address;
}
void Command::setSeek(String listens)
{
  scan = listens;
}
void Command::setRecent(String device)
{
  type = device;
}

String Command::getSpp_profile()
{
  return prof;
}
String Command::getRole()
{
  return role;
}
String Command::getPswd()
{
  return pass;
}
String Command::getAddress()
{
  return addr;
}
String Command::getSeek()
{
  return scan;
}
String Command::getRecent()
{
  return type;
}
