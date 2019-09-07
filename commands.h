#ifndef COMMANDS_h
#define COMMANDS_h

class commands()
{
  private:
    String prof;
    String role;
    String pass;
    String addr;
    String scan;
    String type;
    
  public:
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

#endif
