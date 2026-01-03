# import secrets
# import string
# DEFAULT_LENGTH=14
# CHAR_POOL="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%&*"

# <<<<<<<<<<<<<<<<<Password_Generator>>>>>>>>>>>>>>>>>

# def generate_password(length=DEFAULT_LENGTH):
#     if length<6:
#        length=DEFAULT_LENGTH
#     password=[]
#     for i in range(length):
#        password.append(secrets.choice(CHAR_POOL))   
#     return "".join(password)
# print(generate_password(15));


# <<<<<<<<<<<<<<password_checker>>>>>>>>>>>>>>>>>>>

# def check_password(password):
#     if(len(password)>5 and len(password)<15):
#         lowercase=False
#         uppercase=False
#         num=False
#         special=False
#         for char in password:
#          if(char.isdigit()):
#             num=True
#          if (char.islower()):
#             lowercase=True
#          if (char.isupper()):
#              uppercase=True
#          if(not char.isalnum()):
#             special=True    
#         return lowercase and uppercase and num and special     
#     else:
#         return False

# pwd=input("Enter your password here ");
# if(check_password(pwd)==True):
#     print("STRONG(4/4)")
 
# else:
#    print("WEAK")


#<<<<<<<<<<PYgame>>>>>>>>>>>>>>>>>>>>>..

