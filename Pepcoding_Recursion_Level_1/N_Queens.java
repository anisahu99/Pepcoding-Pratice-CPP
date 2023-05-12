
import java.util.*;
import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int [][] chess=new int[n][n];
        printNQueens(chess,"",0);
	}
    public static void printNQueens(int chess[][],String qsf,int row){
        if(row==chess.length()){
            System.out.print(qsf);
        }
        for(int col=0;col<chess.length();col++){
            if(isItAsafePlaceForTheQueens(chess,row,col)==true){
                chess[row][col]=1;
                printNQueens(chess,qsf+row+"-"+col+",",row+1);
                chess[row][col]=0;
            }
        }
    }
    public static boolean isItAsafePlaceForTheQueens(int [][]chess,int row,int col){
        for(int i=row-1;j=col;i>=0;i--){
            if(chess[i][j]==1){
                return false;
            }
        }
        for(int i=row-1;j=col-1;i>=0&&j>=0;i--,j--){
            if(chess[i][j]==1){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0&&j<chess.length();i--,j++){
            if(chess[i][j]==1){
                return false;
            }
        }
        return true;
    }
    }/* package codechef; // don't place package name! */