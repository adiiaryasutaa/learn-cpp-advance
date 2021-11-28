#include <Account.hpp>

Account::Account(const char *username, const char *password) :
  username(username), password(password) {}

Account::~Account() {}

const char *Account::getUsername() const
{
  return this->username;
}

const char *Account::getPassword() const
{
  return this->password;
}

void Account::setUsername(const char *username)
{
  this->username = username;
}

void Account::setPassword(const char *password)
{
  this->password = password;
}
