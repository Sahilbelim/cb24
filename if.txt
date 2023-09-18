if else desicion making statement
----------------------------------

if ( jo )
-----------------


else (naitar , nakar)
----------------------------------

operator
----------------------------
< - less than 
> - greater than
== - double equal too
!= - not eqaul too
>= - greater than equal too
<= - less than eqaul to

 && - and
 || -or 
 != -not  
 arithmetic operators
+
-
*
/
%
----------------------------------------------------------------------------
//what is decision making statements?
statements in which we check some conditions which can be true or false is called decision making statements
example
if(a != b)
{
    printf("both are not same ");
}

Relational operators
-------------------------------
< - less than
<= - less than equal to
> - greater than
>= - greater than equal to
== - double equal to
!= - not equal to

// why we use decision making statements?
in program we want to execute few line of code if some conditions is true or we want to execute another few lines of code if conditions is false 

// what are different types of decision making statements we can use in c language?
    1) simple if decision making
    2) if else decision making 
    3) nested if decision making
    4) if else if ladder decision statements
    5) switch decision making statements

1) simple if decision making
    in this we check some conditions, if conditions is true then we will executes some line of codes 
    some code
    syntax 
    if (condition)
    {
        //line 1
        //line 2
        //line n 
    }
    sode code  
--------------------------------
if else decision making
    in this we check some condition, if condition is true then we will
    execute some line of code otherwise we will execute some other line of code.
    
    Syntax
    if (condition) //< > <= >= == !=
    {
         //line 1
        //line 2
        //line n 
    }
    else
    {
         //line 1
        //line 2
        //line n 
    }
-------------------------------------------------
what is nested decision making?

    when we use any decision making statement inside any other  decision making statement, then it is called nested decision making statement. we can 255 levels in nested decision making statement.
    syntax
    ---------------
    if(condition)
    {
        if(condition)
        {
            if(condition)
            {
                //level 3   
            }
            else
            {

            }
        }
        else
        {
            if(condition)
            {
                //level 3   
            }
            else
            {

            }
        }
    }
    else
    {
        if(condition)
        {
            //level 2 
        }
        else 
        {

        }
    }
----------------------------------------------------------------------------
if else if ladder decision statements
when we want to check many condition at the same level in way if top most condition is true, then it will execute some line of code and then skip checking remaining conditions, then we use if else if ladder decision making statement.
syntax
-------------------------
if (conditions)
{
    //this code will run only if above condition is true. it will skip checking all below condition
}
else if (condition)
{
    //this code will run only if above condition is true. it will skip checking all below condition
}
else if (condition)
{
    //this code will run only if above condition is true. it will skip checking all below condition
}
else if (condition)
{
     //this code will run only if above condition is true. it will skip checking all below condition
}
else 
{
     //this code will run only if all above condition is false. 
}
-----------------------------------------------------------------------------
switch decision making
when we have to check many conditions on same variables as well as all condition we want to check use == operators then we can use switch decision making statement. it works only on integer,character variables.
syntax 
-------------------------------------
switch(choice)
{
    case 1:
        code ......
        code ......
    break;
    case 2:
        code ......
        code ......
    break;
    case 3:
        code ......
        code ......
    break;
    case value:
        code ......
        code ......
    break;
    default:
        code....
        code....
}