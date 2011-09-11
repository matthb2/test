subroutine square(number) bind(C, name="fortranFunctionToSquareANumber")
  use iso_c_binding
  real (c_double), value, intent(in) :: number
  
  print *, "the square of ", number, " is ", number*number
end subroutine 
