#pragma once

#include <Person.hpp>

class Account
{
private:
  const char *username, *password;  

public:
  Account(const char *username, const char *password);
  ~Account();
  const char *getUsername() const;
  const char *getPassword() const;
  void setUsername(const char *username);
  void setPassword(const char *password);
};
